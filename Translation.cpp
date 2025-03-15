#include<iostream>
#include<string>
using namespace std;
int main(){
	string s, t;
	bool isCorrect = true;
	cin >> s;
	cin >> t;
	if( s.size() == t.size()){
		for(int i = 0;i<s.size();i++){
			if(s[i] != t[s.size() -i-1]){
				isCorrect = false;
				break;	
			}	
		}	
	}else{
		isCorrect = false;	
	}
	if(isCorrect)
		cout << "YES";
	else 
		cout << "NO";	
}
