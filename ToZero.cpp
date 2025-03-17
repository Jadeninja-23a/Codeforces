#include<iostream>
using namespace std;
int main(){
    int no;
    cin >> no;
    for(int i = 0; i<no;i++){
        int k, n;
        cin >> n >> k;
        if(n%2!=0){
            cout << (n-k)/(k-1) + ((n-k)%(k-1)==0 ? 1:2)<<endl;
        }else{
            cout << n/(k-1) + (n%(k-1)==0 ? 0:1)<<endl;
        }
    }
}