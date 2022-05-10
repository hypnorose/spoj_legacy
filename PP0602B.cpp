#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int al,bl,k;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	cin >> al >> bl;
	
	
	int a[al][bl];
	int b[al][bl];
	for(int i=0;i<al;i++)
	{
		for(int j=0;j<bl;j++)
		{
			cin >> a[i][j];			
		}		
	}
		for(int i=0;i<al;i++)
	{
		for(int j=0;j<bl;j++)
		{
			if(i==0&&j==0)b[0][0]=a[0][1];
			else if(i==al-1&&j==0)b[i][j]=a[al-2][0];
			else if(i==0&&j==bl-1)b[i][j]=a[1][bl-1];
			else if(i==al-1&&j==bl-1)b[i][j]=a[al-1][j-1];
			else if(i==0)b[i][j]=a[i][j+1];
			else if(i==al-1)b[i][j]=a[i][j-1];
			else if(j==0)b[i][j]=a[i-1][j];
			else if(j==bl-1)b[i][j]=a[i+1][j];
			else b[i][j]=a[i][j];
			
		}		
	}
	for(int i=0;i<al;i++)
	{
		for(int j=0;j<bl;j++)
		{
			cout << b[i][j] << " "; 			
		}		
		cout << endl;
	}
	
	
	}
	
	
	return 0;	
}

