#include<iostream>
using namespace std;
#include<limits>
const unsigned long long MAX_VALUE = numeric_limits<unsigned long long>::max();
int main() {
	int n;
	cin >> n;
	unsigned long long  maxSum = 1, minSum = 1;
	unsigned long long  min=MAX_VALUE, max=0;
	for(int i=0;i<n;i++){
		int m;
		cin >> m;
		if(m == max){
			maxSum ++;
		}	
		if(m == min){
			minSum++;
		}
		if(m>max){
			max =m;
			maxSum = 1;
		}
		if(m<min){
			min = m;
			minSum = 1;
		}
	}
	cout << (max - min) << " " << ((max!=min) ? (maxSum * minSum):((maxSum*(maxSum-1))/2));
	
}
