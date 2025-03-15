#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cin >> n;
    vector<int> values;
    for (int i = 0; i<n;i++){
        int k;
        cin >> k;
        values.push_back(k);
    }
    for(int i = 0; i <n;i++){
        int remainder = ((values[i] % 15) < 3 )? values[i]%15 + 1:3;
        cout << int (values[i]/15) * 3 + remainder <<endl;
    }
}