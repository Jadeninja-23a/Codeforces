#include<iostream>
using namespace std;
int main(){
    int n, n1, n2 ,n3, n4;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> n1 >> n2 >> n3 >> n4;
        if(n1 == n2 && n2 == n3 && n3 == n4 && n1 !=0){
            cout << "yes"<<endl;
        }else{
            cout << "no"<<endl;
        }
    }
}