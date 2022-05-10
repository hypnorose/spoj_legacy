#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	string imie[n],nazwisko[n];char z;int czas[n];
	int minczas=(1<<20);
	for(int i=0;i<n;i++){
		int a,b;
		cin >> imie[i] >> nazwisko[i] >> a >> z >> b;
		czas[i]=a*60+b;		
		if(czas[i]<minczas){
			minczas=czas[i];
		}
	}
	for(int i=0;i<n;i++){
		if(czas[i]==minczas){
			cout << imie[i] << " " << nazwisko[i] << endl;
			
		}
		
	
	}
}
