#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n;
cin >> n;
while(n--){
	int p,l;
	cin >> l >> p;
	if(l==0){
	cout << 1 << endl;
	continue;
	}
	cout << ceil(log(l)/log(p))<< endl;
	
	
	
}	
	

}