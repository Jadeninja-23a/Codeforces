#include<iostream>
using namespace std;

int main(){
	char q[50];
	char copy[50];
	int n, t;
 	cin >> n >> t;
	for(int i = 0; i<n;i++){
		cin>> q[i];
	}	
	for(int i=0;i<n;i++){
		copy[i] = q[i];
	}
	for(int i=0; i<t;i++){
		for(int j=0; j<n-1;j++){
			if(copy[j] == 'B' && copy[j+1] == 'G'){
				q[j] = copy[j+1];
				q[j+1] = copy[j];
				j++;
			}
		}
		for(int k=0;k<n;k++){
                	copy[k] = q[k];
       		}

	}

	for(int i=0; i<n;i++){
		cout<<q[i];
	}

}


