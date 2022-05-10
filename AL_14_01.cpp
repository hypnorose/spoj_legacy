#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
double tab[200];
int main(){
	for(int i='A';i<='Z';i++)tab[i]=0;
	string s;
	getline(cin,s);
	double ile=s.length();
	for(int i=0;i<s.length();i++){
		if(s[i]==' ')ile--;
		else tab[s[i]]++;
	}
	for(int i='A';i<='Z';i++){
		cout << (char)i;
	//	cout <<round(100*tab[i]/ile);
		for(int j=0;j<round(100*tab[i]/ile);j++)cout << "*";
		if(i!='Z')cout << endl;
	}
}