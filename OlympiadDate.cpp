#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        int output = 0;
        bool done = false;
        int arr[10] = {};
        for(int j =1; j<=n;j++){
            int a;
            cin >> a;
            arr[a]++;
            if(arr[0]>=3 && arr[1]>=1 &&arr[2]>=2&&arr[3]>=1&&arr[5]>=1&&!done){
                output=j;
                done = true;
            }
        }
        cout << output << endl;
    }
}