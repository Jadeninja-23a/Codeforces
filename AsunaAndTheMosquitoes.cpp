#include<iostream>
using namespace std;
int main(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long max = 0;
        long long noOfOdd = 0,noOfEven = 0,sum=0;
        while(n--){
            long long k;
            cin >> k;
            sum += k;
            max = k>max ? k:max;
            if(k%2){
                noOfOdd++;
            }else{
                noOfEven++;
            }
        }
        if(!noOfEven || !noOfOdd){
            cout << max << endl;
        }else
        cout << sum + 1 - noOfOdd<<endl;
    }
}