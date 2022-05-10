#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
	int n;
	cin >> n;
	while(n--){
	
	string s,p;
	cin >> s >> p;
	int j=0;bool fl=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==p[j])j++;
		if(j==p.length())fl=1;
		
	}
	if(fl)cout << "Tak" << endl;
	else cout << "Nie" << endl;
	}
}