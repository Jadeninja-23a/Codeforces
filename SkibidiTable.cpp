
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long 
#define ull unsigned long long
#define ld long double
#define us unsigned 
#define vi vector<int>
#define vvi vector<vector<int>
#define vb vector<bool>
#define pi pair<ll, ll>
#define si set<ll>
#define osi ordered_set<ll>
#define omsi ordered_multiset<ll>
#define msi multiset<ll>
#define sz(v) static_cast<int>(v.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define debug(x) cerr<< #x << " is " << x << endl;

#define rp(j, l, n) for (decltype(n) j = l; (l < n) ? j < n : j > n; (l < n) ? j++ : j--)
// j is the looping variable l and n are starting and ending 
#define inp(v,n) rp(j,0,n) cin >> v[j];
#define out(v,n)    \
    rp(i,0,n) cerr << v[i] << " ";\
    cerr<<endl;
#define min3(a,b,c) min(a, min(b, c))
#define max3(a,b,c) max(a, max(b, c))
#define min4(a,b,c,d) min(a, min3(b, c, d))
#define max4(a,b,c,d) max(a, max3(b, c, d))
//returns lowest non negative integer in the set 
ll mex(set<ll> &arr)
{
    ll mex = 0;
    for (auto idx : arr)
    {
        if (idx == mex)
            mex += 1;
        else
            break;
    }
    return mex;
}
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
// string toBase4(ll num) {
//     if (num == 0) return "0";
//     string result = "";
//     while (num > 0) {
//         result = char('0' + num % 4) + result;
//         num /= 4;
//     }
//     return result;
// }
pi giveCordinates(ll n, ll number){
    number -= 1;
    ll x = 0, y = 0;
    ll rowWidth = pow(2,n);
    ll divider = pow(2, 2*(n-1));
    while(rowWidth > 1 && divider>0){
    ll k = number/divider;
    number = number%divider;
    rowWidth /= 2;
    divider /= 4; 
    switch (k){
        case 0:
        break;

        case 1:
        x+=rowWidth;
        y+=rowWidth;
        break;

        case 2:
        y+=rowWidth;
        break;

        case 3:
        x+=rowWidth;
        break;
    }
}
    pi cords = {y+1, x+1};  
    return cords;  
}
ll getNo(ll x, ll y, ll n){
    ll rowWidth = pow(2,n);
    ll subdiv = pow(2,2*(n-1));
    x--; y--;
    ll number = 1;
    while(rowWidth){
    if(x<rowWidth/2){
        if(y<rowWidth/2){
            
        }else{
            number += subdiv*2;
            y -= rowWidth/2;
        }
    } else{
        x -= rowWidth/2;
        if(y<rowWidth/2){
            number += subdiv*3;
        }else{
            number+= subdiv;
            y-=rowWidth/2;
        }
    }
    subdiv /= 4;
    rowWidth /=2;
    }
    return number;
}
void solve(){
    ll n, q;
    cin >> n >> q;
    cin.ignore();
    for(ll i =0; i<q;i++){
        string line;
getline(cin, line); // reads whole line

if (line.substr(0, 2) == "->") {
    ll x, y;
    stringstream ss(line.substr(2)); // skip "->"
    ss >> x >> y;
    cout << getNo(y, x, n) << endl;
} else if (line.substr(0, 2) == "<-") {
    ll number;
    stringstream ss(line.substr(2)); // skip "<-"
    ss >> number;
    pi cords = giveCordinates(n, number);
    cout << cords.first << " " << cords.second << endl;
}

    }
}
int main(){
    FAST_IO
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}