#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long  findDivisions(long long  l1, long long  r1, long long  l2, long long  r2){
	if(r1<=l1||r2<=l2){
		return 0;
	}
	long long  k1 = (long long )(log2(r1-l1));
	long long  k2 = (long long )(log2(r2-l2));
	long long  k = min(k1,k2);
	long long  leftBorder = 0 , rightBorder, upBorder, downBorder = 0;
	if(l2%(1<<k) == 0){
		downBorder = l2;
	}else{
		if(l2-(l2%(1<<k)) + (1<<(k+1)) > r2){
			k--;
		}
		downBorder = (l2-(l2%(1<<k))) + (1<<k); 
	}	
	if(l1%(1<<k) == 0){
		leftBorder = l1;
	}else{
		if(l1-(l1%(1<<k)) + (1<<(k+1)) > r1){
			k--;
		}
		leftBorder = (l1-(l1%(1<<k))) + (1<<k); 
	}
	long long  pow = 1<<k;
	long long  ans = 0;
	rightBorder = leftBorder + pow*((long long )((r1 - leftBorder)/pow));
	upBorder = downBorder + pow*((long long )(((r2-downBorder)/pow) ));
	ans += (((downBorder-upBorder)/pow)*((leftBorder-rightBorder)/pow));
	
	if(k==0){
		return (r1-l1)*(r2 -l2);
	}
	ans+= findDivisions(l1 , leftBorder, l2 , r2) + findDivisions(rightBorder, r1, l2, r2) + findDivisions(leftBorder, rightBorder, upBorder, r2) + findDivisions(leftBorder, rightBorder, l2, downBorder);
	return ans;
}

 int main(){
	long long  n;
	cin >> n;
	for(long long  i = 0; i < n; i++){
		long long  l1, l2, r1 ,r2;
		cin >> l1 >> r1 >> l2 >> r2;
		cout<<findDivisions(l1,r1,l2,r2)<<endl;
	}
}
