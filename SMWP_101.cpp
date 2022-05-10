#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
	unsigned long long tab[201][201];
	const int PR=100;
int main(){
	int xc,yc,r,temp,temp2;
	cin >> xc >> yc >> r;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> temp >> temp2;
		temp-=xc;
		temp2-=yc;
	//	cout << temp << " " << temp2 << endl;
		if(temp*temp+temp2*temp2>r*r)continue;
		tab[temp+PR][temp2+PR]++;
		
	}
	int ix=200,iy=200,mx=0;
	for(int i=0;i<=200;i++){
		for(int j=0;j<=200;j++){
			if(tab[i][j]>mx){
				mx=tab[i][j];
			}	
		}
	}
	for(int i=0;i<=200;i++){
		for(int j=0;j<=200;j++){
			if(tab[i][j]==mx){
				if((i-PR)*(i-PR)+(j-PR)*(j-PR)<(ix-PR)*(ix-PR)+(iy-PR)*(iy-PR)){
					ix=i;
					iy=j;
				}			
				
				
			}
		}
	}
	cout << ix-PR+xc << " " << iy-PR+yc << " " << mx;
	
	return 0;
}
