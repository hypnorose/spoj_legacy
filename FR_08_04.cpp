#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,a,b;
	cin >> n;
	double gor=0,dol=0;
	while(n--){
		scanf("%d %d",&a,&b);
		double rad =( a * M_PI ) / 180.0f;
		if(a==0)continue;
		if(a>0){
			gor+=b*sin(rad);
			
		}
		else{
			dol-=b*sin(rad);
		}
	
		
	}	cout.precision(2);
	cout <<fixed <<  gor << " " << dol << endl;
}