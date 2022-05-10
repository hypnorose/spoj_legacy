#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	char z;int l=0;char pop,pop2;
	while(cin >> z){
		if(z!='.'&&pop=='.')l++;
		if(z=='?')l++;
		if(z=='!'&&pop!='?')l++;
		
		pop2=pop;
		pop=z;
		
	}
	if(pop=='.')l++;
	cout << l;
}