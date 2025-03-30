#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k,m,n;
        cin >> n>>m>>k;
        long long maxPerRow = k/n + (k%n == 0 ? 0:1);
        long long spaces = m - maxPerRow;
        long long maxBranch = max((long long)1, m/(spaces + 1));
        cout << maxBranch << endl;
    }
}