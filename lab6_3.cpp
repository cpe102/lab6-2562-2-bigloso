#include<iostream>
#include<string>
using namespace std;

char before(char x){
	char s ;
	if(x>=65 && x<=90){
		if(x==65){
			return 90 ;
		}
		s=x-1;
		return s;
	}
	else{
		return 48;
	}
}

int main(){
	//Test Case
	cout << before('Y') << "\n";
	cout << before('b') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
