#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> sheep;
        while(n--){
            int k; cin >> k;
            sheep.push_back(k);
        }
        sort(sheep.begin(), sheep.end());
        cout << sheep[sheep.size() - 1] - sheep[0] << endl;
    }
}