#include<iostream>
#include<vector>
using namespace std;
int main (){
	vector <vector<int>> grid = {{0,0,0,0,0},{0,1,1,1,0},{0,1,1,1,0},{0,1,1,1,0},{0,0,0,0,0}};

	for(int i =1;i<4;i++){
		for(int j=1;j<4;j++){
			int n;
			cin >>n;
			grid[i][j] +=n;
			grid[i][j+1] +=n;
			grid[i][j-1] +=n;
			grid[i+1][j] +=n;
			grid[i-1][j] +=n;
		}
	}
	
	for(int i =1;i<4;i++){
		for(int j=1;j<4;j++){
			cout << (grid[i][j] %2);	
		
		}
		cout << endl;
	
	}
	
}
