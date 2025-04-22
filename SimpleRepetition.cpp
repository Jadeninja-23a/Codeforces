
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
bool checkprime(int n){
    for(int i =2; i<= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    if(n==1){
        return false;
    }
    return true;
}
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    int x , k;
    cin >>x >>k;
    if(k==1){
        if(checkprime(x)){
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else{
        if(k==2 && x==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    cout << endl;
}
int main(){
    FAST_IO
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}