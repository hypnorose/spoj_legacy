#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
	int x;
	int baza=1<<19;	
	int A[1<<20];


 	int minim(int k, int x){
 		if(x >= baza)
 			if(k<=A[x])return x - baza;else return -1;
 		if(A[x*2+1] >= k)
 			return minim(k, x*2+1);
 		else
 			return minim(k-A[x*2+1], x*2);
 	}
 
 
 
 
int main() {
	ios_base::sync_with_stdio(0);
cin.tie(0); // tylko jak wejscie i wyjscie sa na zmiane (np. odpowiadanie na kolejne zapytania)
cout.tie(0); 
 
	int dl_ciagu, il_q,a,b,k=0,l=1;
 int m;
	string napis;
 
 
 


		while(cin>>m){
			getline(cin,napis);
			
	
			int suma=0,temp=1;
			for(int i=napis.length()-1;i>=0;i--){
				if(napis[i]!=' '){suma+=temp*(int)(napis[i]-48);
				temp*=10;
			//	cout << suma << endl;
				}
				else {
					temp=1;
					A[suma+baza]=1;
 					x=suma+baza;
					
				
					while(x>1)
						{
							x/=2;
							A[x]=A[2*x]+A[2*x+1];
 
						}			
					suma=0;
					
				}
				
			}
			int n=minim(m,1);
			if(n!=-1)cout << n << endl;
			else cout << "-" << endl;
			for(int l=0;l<1<<20;l++)A[l]=0;
		}
 	
			
		
 
 
 
}