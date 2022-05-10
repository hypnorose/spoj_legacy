#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	char z;
	int a,b;
	cin >> a >> z >> b;
	int temp,licznik=0;
	while(b!=0){
		if(a<b)swap(a,b);
		licznik+=a/b;
		temp=b;
		b=a%b;
		a=temp;
	}
	cout << licznik << endl;
	}
}