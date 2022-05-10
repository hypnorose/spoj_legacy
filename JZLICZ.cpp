#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string l;
	int tab[127];
	int k;
	cin >> k;
	for(int i=0;i<127;i++)
			{
				tab[i]=0;
				
			}
	for(int j=-1;j<k;j++)
	{
	
			getline(cin,l);
			
			
			for(int i=0;i<l.length();i++)
			{
				int temp=(int)l[i];
				tab[temp]+=1;
			
			}
			
	
	}

		for(int i=97;i<127;i++)
			{
				if(tab[i]!=0&&(char)i!=' ')cout << (char)i << " " << tab[i] << endl;
				
			}
		for(int i=0;i<97;i++)
			{
				if(tab[i]!=0&&(char)i!=' ')cout << (char)i << " " << tab[i] << endl;
				
			}
	
	
	return 0;	
}
