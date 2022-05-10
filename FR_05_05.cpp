#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
	unsigned long long tab[101010102];
int main(){

	tab[0]=1;
	for(int i=1;i<=101010101;i++){
		tab[i]=(tab[i-1]*2)%101010101;
	}
	int n;
	cin >> n;
	while(n--){
	
	int a;
	cin >> a;
	if(a==1){
		cout << 3;
	}
	else if(a==2)cout << 4;
	else{
	
	cout << (tab[a/2]+tab[(a+1)/2])%101010101;
		
	}
	cout << endl;
	}
	
	return 0;
}
