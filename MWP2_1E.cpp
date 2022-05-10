#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

bool comp(string i,string y){
	int p=strcmp(i.c_str(),y.c_str());
	if(p<0)return 1;
	else return 0;
}

int main(){
	string s[1000001];
	int n;
	n=0;	
	while(cin >> s[n]){
		n++;
	}
	sort(s,s+n,comp);
	for(int i=0;i<n;i++){
		cout << s[i] << endl;
	}
	
	
}