#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
	int tab[200],ana[200];
int main() {
	string s;
	int w=0;
	cin >> s;
	int n;
	cin >> n;
	for(int j='a';j<='z';j++){
		tab[j]=0;
	}
	for(int j=0;j<s.length();j++){
		tab[s[j]]++;
	}
	for(int i=0;i<n;i++){
		for(int j='a';j<='z';j++){
			ana[j]=0;
		}
		cin >> s;
		for(int j=0;j<s.length();j++){
			ana[s[j]]++;
			
		}
		bool fl=1;
		for(int j='a';j<='z';j++){
			if(tab[j]!=ana[j])fl=0;
		}
		if(fl==1)w++;
	}
	cout << w;
	return 0;
}