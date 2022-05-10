#include <iostream>
using namespace std;

int main() {
	int h;
	cin >> h;
	while(h--)
	{
	int temp;
	int k;
	cin >> k;int tab[k];
	for(int i=0;i<k;i++)cin >> tab[i];
	
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		if(tab[i]>tab[j]){
			temp=tab[i];
			tab[i]=tab[j];
			tab[j]=temp;
			
		}
		
		
		
	}
	int best=tab[k-1];
	for(int i=0;i<k;i++)
	{
		if(tab[i]==best)cout << tab[i] << " ";
		
		
	}
		for(int i=0;i<k;i++)
	{
		if(tab[i]!=best)cout << tab[i] << " ";
		
		
	}
	cout << endl;
	}



	return 0;
}