#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int w=0;
	string s;cin >> s;
	int a[s.length()+1];
	int b[s.length()+1];
	a[0]=0;
	b[0]=0;
	
	for(int i=0;i<s.length();i++){
		a[i+1]=a[i];
		b[i+1]=b[i];
		if(s[i]=='B')a[i+1]++;
		if(s[i]=='O')b[i+1]++;
	//	cout << a[i] << " " << b[i] << endl;
	}
	double t1,t2;
	t1=a[s.length()];
	t2=b[s.length()];
	double x=t1/t2;
	for(int i=1;i<=s.length();i++){
		t1=a[i],t2=b[i];
		if(b[i]==0)continue;
		if(abs(t1/t2-x)<0.00001)w++;
	//	cout << a[i] << " " << b[i] << endl;
	//	cout << x << "x" << t1/t2 << endl;
	}
	cout << w;
	return 0;
}
