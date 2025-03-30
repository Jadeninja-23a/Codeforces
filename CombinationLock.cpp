#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool yo = false;
        int combination[n] = {};
        for(int i = 0; i<n;i++){
            if(combination[2*i%n]){
                yo = true;
                break;
            }
            combination[2*i%n]
        }
        if(yo){
            cout << -1 << endl;
        } else{
            for(int i = 0; i< n;i++){
                cout << combination[i]<<" ";       
            }
            cout<<endl;
        }
    }
}