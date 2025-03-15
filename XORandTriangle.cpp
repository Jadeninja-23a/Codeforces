#include<iostream>
using namespace std;

int main(){
    int n;
    bool s = false;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        // method 1 direct but runtime
        // for(int i = 2;i<x; i++){
        //     int k = i ^ x;
        //     if(k > x){
        //         if(x + i > k){
        //             cout << i << endl;
        //             s = true;
        //             break;
        //         }
        //     } else{
        //         if (k+i > x){
        //             s=true;
        //             cout << i << endl;
        //             break;
        //         }
        //     }
        // }
        // if(!s){
        //     cout << -1<<endl;
        // }
        // s =false;
        if (x<5 || ((x & (x-1)) == 0)){
            cout << -1<<endl;
        } else {
            bool check = true;
            for(int j = 1; j<x; j=j<<1){
                if((x & j) == j){
                    continue;
                } else{
                    cout << x - j << endl;
                    check = false;
                    break;
                }
            }
            if(check){
                cout << -1<<endl;
            }
        }
    }
}