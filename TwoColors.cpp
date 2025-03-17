#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    long long t;
    cin >> t;
    for(long long i = 0; i < t;i++){
        long long n, m;
        cin >> n >> m;
        vector<long long> prefixsum(m+1,0);
        long long sum = 0;
        vector<long long> colors(m);
        for(long long i = 0; i< m; i++){
            cin >> colors[i];
            if(colors[i] == n){
                sum -= 2*(m-1);
            }
        }
       sort(colors.begin(), colors.end()); 
       for(long long i = 0; i < m; i++){
        prefixsum[i+1] = prefixsum[i] + colors[i];
       }
        for(long long i = 1; i<m;i++){
            long long a = colors[i];
            long long left = 0;
            long long right = i;
            while(left < right){
            long long mid = (left + right)/2;
                if(colors[mid] >= n-a){
                    right = mid;
                }else{
                    left = mid +1;
                }
            }

            sum+= 2*((i-left)*(colors[i] - n +1) + prefixsum[i] - prefixsum[left] );
        }
        cout << sum<< endl;
    }
}