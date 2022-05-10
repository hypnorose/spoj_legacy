#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n,m;
int 	przyst[1<<20],lampy[1<<20];
bool styka(int r){
	int j=0;
//	unsigned long long lewa=lampy[0]-r,prawa=lampy[0]+r;
	
	for(int i=0;i<n;i++){
//		cout << lampy[j]-r << " " << przyst[i] << " " <<  lampy[j]+r << endl;
			if(przyst[i]>=lampy[j]-r&&przyst[i]<=lampy[j]+r)continue;
			else if(przyst[i]<lampy[j]-r)
			{
			return 0;
			}		
			else if(przyst[i]>lampy[j]+r){
				while(!(przyst[i]>=lampy[j]-r&&przyst[i]<=lampy[j]+r)){
					j++;
					if(j==m)return 0;
				}
				
			}
		
		
	
	}
	
	return 1;
	
}
int main ()
{	
	cin >> n >> m;
	for(int i=0;i<n;i++)scanf("%d",&przyst[i]);
	for(int i=0;i<m;i++)scanf("%d",&lampy[i]);
	int srodek,start,end;
	start=-1;
	end=1000000000;
		//cout << start << " " << end << endl;
	while(end-start>1){
		srodek=(start+end)/2;
		if(styka(srodek))end=srodek;
		else start=srodek;
		//cout << start << " " << end << " " << srodek << " " << styka(srodek)<<  endl;
		
	}
	cout << end;
  return 0;
}
