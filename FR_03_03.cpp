#include <iostream>
#include <cmath>
using namespace std;
bool podziel[1000001];
int pre[1000001];
bool juzbylo[1000001];
int main(){
	int n,t;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t;
		if(podziel[t])continue;
		
		for(int j=t;j<=1000000;j+=t)
		{
			
		podziel[j]=1;	
		}		
	}
	int suma=0;
	pre[0]=0;
	for(int i=1;i<=1000000;i++){
		if(!podziel[i])suma++;
		pre[i]=suma;
		//cout << pre[i] << endl;
	}
	cin >> n;int a,b;
	while(n--)
	{
		cin >> a >> b;
		cout << pre[b]-pre[a-1] << endl;
	}
}
