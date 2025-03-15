#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    bool isPossible = true;
    int n , m , d;
    cin >> n >> m >> d;
    vector<int> nos;
    int counter=0,median;

    for(int i = 0; i< m*n;i++){
        int a;
        cin >> a;
        if(i!=0){
            if((a-nos[0])%d != 0){
                isPossible = false;
                break;
            }
            
        }
        nos.push_back(a);
    }
    if(isPossible){
        sort(nos.begin(), nos.end());
        median = nos[m*n/2];
        for(int i =0;i<m*n;i++){
            counter += abs(median - nos[i]);
        }
        counter /=d;
        cout <<counter;
    }else{
        cout << -1;
    }
}