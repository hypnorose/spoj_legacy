#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int k[1<<20],c[1<<20];
int main(){
	int e=1;
	k[0]=1;c[0]=0;
	for(int i=1;i<1<<20;i++){
		k[i]=k[i-1]+1;
		c[i]=e+c[i-1];
		e++;	
	}
	int n,t;
	cin >> n;
	while(n--){
		cin >> t;
		if(t==1){
			cout << "1 = BRAK" << endl;
			continue;	
		}
		bool fl=0;
		for(int i=1;c[i]<=t+i;i++){
			if((t-c[i])%k[i]==0){
				cout << t << " = " << (t-c[i])/k[i];
				
				for(int j=1;j<k[i];j++){
					cout << " + " << (t-c[i])/k[i]+j;
				}
				
				
				fl=1;
				break;
				
			}
	
			
		}
		if(fl==0)cout << t << " = BRAK";
		cout << endl;
	}
	
}