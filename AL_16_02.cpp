#include <iostream>
using namespace std;

int main() {
	string a;int i;
	while(getline(cin,a)){
			string seed="";int j=0;
			
		
			for(i=0;a[i]!=' '&&i<a.length();i++){seed+=a[i];}
			string tab[a.length()];
			
			for(i=i+1,j=0;i<a.length();i++){
				if(a[i]==' ')
				{
					
				if(a[i-1]==' ')tab[j]+=a[i];
					j++;
					
				}
				else
				tab[j]+=a[i];
				
			}
		
			for(i=0;i<seed.length();i++){
				cout << seed[i];
				if(tab[i]==" ");
				else cout << tab[i];
				cout << " ";
			}
			
			
				cout << endl;
		
	}
	return 0;
}