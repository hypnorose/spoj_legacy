#include <iostream>
#include <cmath>
using namespace std;
	int kubel[1001];
int main()
{	int h;cin >> h;
	while(h--){
	
	int n;
	int z=1001;
	while(z--)kubel[z]=0;
	cin >> n;int temp;
	for(int i=0;i<n;i++){
		cin >> temp;
		for(int j=1;j<=temp;j++){
			kubel[j]++;
		}
		
	}
	for(int i=1;kubel[i]!=0;i++){
		cout << kubel[i] << " ";
	}
	cout << endl;
}
}
