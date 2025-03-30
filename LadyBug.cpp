#include<iostream>
using namespace std;
#include<string>
int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int noOfOdd = 0;
        int noOfEven = 0;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        for(int i = 0;i<n;i++){
            if(s1[i] == '1'){
                if(i%2==0){
                    noOfOdd++;
                }else{
                    noOfEven++;
                }
            }
        }
        for(int i = 0;i<n;i++){
            if(s2[i] == '1'){
                if(i%2!=0){
                    noOfOdd++;
                }else{
                    noOfEven++;
                }
            }
        }
        int maxOdd, maxEven;
        if(n%2 == 0){
            maxOdd = n/2;
            maxEven = n/2;
        } else {
            maxOdd = (n-1)/2;
            maxEven = (n+1)/2;
        }
        if(noOfOdd > maxOdd || noOfEven > maxEven){
            cout << "NO"<<endl;
        } else {
            cout << "YES" << endl;
        }
    }
}