#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int no;
    cin >> no;
    for(int i = 0; i< no ; i++){
        int n, k;
        long long sum = 0;
        cin >> n >> k;
        vector<long long> nos(n);
        for(int i = 0; i < n; i++){
            cin >> nos[i];
        }
        if(k==1){
            auto maxelement = max_element(nos.begin(), nos.end());
            int maxIndex = distance(nos.begin(), maxelement);
            if(maxIndex ==0 ||maxIndex == n-1){
            sort(nos.begin(),nos.end());
            reverse(nos.begin(),nos.end());
            for(int i = 0; i<=k;i++){
                sum+=nos[i];
            }
                
            }else{
                sum += (nos[0] > nos[n-1] ? nos[0]:nos[n-1]) + nos[maxIndex];
            }
        }else{
            sort(nos.begin(),nos.end());
            reverse(nos.begin(),nos.end());
            for(int i = 0; i<=k;i++){
                sum+=nos[i];
            }
        }
            cout << sum << endl;
    }
}