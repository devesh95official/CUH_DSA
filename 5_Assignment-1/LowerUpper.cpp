#include<iostream>

using namespace std;

int main() {

	char a1;
	cin>>a1;

	if(a1>=97 && a1<=122)cout<<"lowercase";
	else if(a1>=65 && a1<=90)cout<<"UPPERCASE";
	else cout<<"Invalid";
    
	return 0;
}