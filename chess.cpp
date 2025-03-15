#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <vector<bool>> chess;
	int n, m;
	cin >> n >> m;
	for(int i=0; i<n;i++){
		vector <bool> row;
		for(int j=0; j<m;j++){
			char k;
			cin >> k;
			row.push_back((k == '.'));
		}
		chess.push_back(row);
	}

	for(int i=0; i<n;i++){
		for(int j=0; j<m;j++){
			if(chess[i][j]){
				if((i+j)%2 == 0){
					cout << 'W';
				}else{
					cout << 'B';
				}
			}else{
				cout << '-';
			}
		}
		cout << endl;
	}
}
