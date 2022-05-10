#include <iostream>
using namespace std;

int main() {
	
	int h;
	cin >> h;
	while(h--){
	int n;
	cin >> n;
	int h=1;
	
	for(int i=1;i<n;i++)h*=3;
	int tab[h];
	for(int i=0;i<h;i++){cout << "_";tab[i]=1;}
	int k=h;
	cout << endl;
	for(int i=1;i<n;i++){
	
		//cout << k;
		for(int j=0;j<h;j++){
		if(tab[j]==1){	
			for(int l=j;l<j+(k/3);l++){
				cout << "_";
			
			}
			for(int l=j+(k/3);l<j+(2*k/3);l++){
				cout << " ";
				tab[l]=0;
			
			}
			for(int l=j+(2*k/3);l<j+k;l++){
				cout << "_";
				
			}
		j+=k-1;
			
		}
		else {cout << " ";
		
		}
			
		}
		k=k/3;
		cout << endl;
		
	}
	cout << endl;
	}
	return 0;
}