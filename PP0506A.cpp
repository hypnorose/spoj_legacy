#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int a,b,z,pom,k;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	
				cin >> z;
				int tab[z][3];
				string nazw[z];
				for(int i=0;i<z;i++)
				{
					cin >> nazw[i] >> tab[i][0] >> tab[i][1];
					tab[i][2]=tab[i][0]*tab[i][0]+tab[i][1]*tab[i][1];
					
				}
				for(int j=0;j<z;j++)
				{
					for(int i=0;i<z-1;i++)
					{
			
						if(tab[i][2]>tab[i+1][2])
						{
							pom=tab[i][2];
							tab[i][2]=tab[i+1][2];
							tab[i+1][2]=pom;
								pom=tab[i][0];
							tab[i][0]=tab[i+1][0];
							tab[i+1][0]=pom;
								pom=tab[i][1];
							tab[i][1]=tab[i+1][1];
							tab[i+1][1]=pom;
						string	pom1=nazw[i];
						nazw[i]=nazw[i+1];
						nazw[i+1]=pom1;
						}
						
						
					}
					
				}
				for(int i=0;i<z;i++)
				{
					cout << nazw[i] << " " <<  tab[i][0] << " "   << tab[i][1] << endl;
				
					
				}
	cout << endl;
	}
	return 0;	
}

