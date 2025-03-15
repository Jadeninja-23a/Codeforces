#include<iostream>
using namespace std;

int main(){
    int noOfVectors;
    cin >> noOfVectors;
    int sumx = 0, sumy = 0, sumz = 0;
    int x, y, z;
    for(int i = 0; i< noOfVectors; i++){
        cin >>x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;

    }
   
    if(sumx==0 && sumy==0 && sumz==0){
        cout << "YES";
    } else{
        cout << "NO";
    }
}