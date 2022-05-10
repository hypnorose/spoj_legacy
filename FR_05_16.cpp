#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
int main(){
	stack <int> stosik;
	int n,a,b;
	cin >> n;char z;
	for(int i=0;i<n;i++){
		cin >> z;
		if(z=='1'){
			cin >> a;
			stosik.push(a);
		}
		else{
			cin >> z;
			a=stosik.top();
			stosik.pop();
			b=stosik.top();
			stosik.pop();
			if(z=='+')stosik.push(b+a);
			if(z=='-')stosik.push(b-a);
			if(z=='*')stosik.push(b*a);
			if(z=='/')stosik.push(b/a);
		}
		
	}
	a=stosik.top();
	cout << a << endl << "ONP";
}