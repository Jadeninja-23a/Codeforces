#include<iostream>
using namespace std;

int main(){
	cin >> noskipws;
	char letters [100];
	int i, lowerCase = 0; 
	int higherCase =0;
	for( i =0;;i++){
		cin >> letters[i];
		
		if(isspace(letters[i])){
			break;
		}
		if(letters[i] - 'A'>25){
			lowerCase ++;
		}else{
			higherCase++;
		}
	}
	if(higherCase>lowerCase){
		for(int j = 0; j<i;j++){
			letters[j] = letters[j] & '_';
		}	
	}else{
		for(int j = 0; j<i;j++){
			letters[j] = ' '|letters[j];
		}	
	}
	for(int j=0;j<i;j++){
		cout << letters[j];
	}

}
