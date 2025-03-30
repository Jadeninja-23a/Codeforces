#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
// Function to count distinct prime factors of a number
void countPrimeFactors(int MAXN, vector<int>& spf, vector<int>& dp) {
    for (int i = 2; i <= MAXN; ++i) {
        spf[i] = i;  // Initialize with the number itself
    }
 
    for (int i = 2; i * i <= MAXN; ++i) {
        if (spf[i] == i) {  // Only prime numbers
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;  // Store smallest prime factor
                }
            }
        }
    }
    for(int i =2;i<=MAXN;i++){
        int n=i;
        int count = 0;
        int lastFactor = -1;
    while (n != 1) {
        if (spf[n] != lastFactor) {   // Count only unique primes
            count++;
            lastFactor = spf[n];
        }
        n /= spf[n];
    }
    dp[i] = dp[i-1] + count;
}
}

int main(){
    int t;
    cin >> t;
    vector<int> values;
    while(t--){
        int n; cin >> n;
        values.push_back(n);
    }
    const int MAXN = *max_element(values.begin(), values.end()) + 1;
    vector <int> dp(MAXN,-1);
    vector<int> spf(MAXN);     // Smallest Prime Factor array
    
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    countPrimeFactors(MAXN-1, spf, dp);
    for(const auto& x : values){
        cout << dp[x]<<endl;
    } 
}
 
 


 

 

 
