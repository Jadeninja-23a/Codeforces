#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin >>n>>x;
        int noOfTeams = 0;
        vector<int> numbers;
        for(int i = 0;i<n;i++){
            int k;cin >> k;
            if(k>=x){
                noOfTeams++;
            }else{
                numbers.push_back(k);
            }
        }
        sort(numbers.rbegin(), numbers.rend());
        int sameNo=1;
        int currNo=0;
        int biggerNos = 0;
        for(int i=0; i<(int)(numbers.size()); i++){
            if(((i+1) < (int)(numbers.size())) && (numbers[i] == numbers[i+1])){
                sameNo++;
            }else{
                int noOfPlayers = x/numbers[i] + (x%numbers[i]==0 ? 0:1);
                int usableNos = biggerNos + sameNo;
                noOfTeams+= usableNos/noOfPlayers;
                biggerNos = usableNos%noOfPlayers;
                sameNo = 1;
            }
        }
        cout <<noOfTeams<<endl;
    }
}