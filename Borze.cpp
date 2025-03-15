#include<iostream>
#include<string>
using namespace std;
int main(){
	bool isDash = false;
	string input;
	cin >> input;
	for(int i =0; i< input.length();i++){
		if(input[i] == '.'){
			if(isDash){
				cout << 1;
			}else{
				cout << 0;
			}
			isDash = false;
		} if(input[i] == '-'){
			if(isDash){
				cout<<2;
				isDash = false;
			}else{
				isDash = true;
			}
		}
	}
}
