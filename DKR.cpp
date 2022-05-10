#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
 	unsigned long long a,b;
 	cin >> a >> b;
 	unsigned long long suma=0;
 		if(a<=2&&b<=2){
 			cout << 0 << endl;
 			continue;
		 }
 		if(b==1)swap(a,b);
 		if(a==1){
 		suma+=2*(b-2);
		 suma+=(b-2)*(b-3);
		 }
 		else{
		 
	 	if(a*b>4)suma+=4*(a*b-4);
	 	if(a>1&&(a*b)>6)suma+=2*(a-2)*((a*b)-6);
	 	if(b>1&&(a*b)>6)suma+=2*(b-2)*((a*b)-6);
	 	if(a>2&&b>2&&a*b>9)suma+=(a-2)*(b-2)*((a*b)-9);
		}
		 cout << suma << endl;
 	}
}