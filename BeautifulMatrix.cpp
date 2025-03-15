#include<iostream>
#include<vector>
using namespace std;
int main(){
    int posi=0, posj=0, n=0;
    for(int i = 0; i< 5; i++){
        vector<int> row;
        for(int j = 0; j< 5; j++){
            
            cin >> n;
            if(n == 1){
                posi = i;
                posj = j;
            }
        }
        
    }
    cout <<abs(posi-2) + abs(posj-2);
}