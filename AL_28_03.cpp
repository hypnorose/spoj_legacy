#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int h;
	cin >> h;
	while(h--){
	
	int n;
	cin >> n;
	int mx=0;char z;
	for(int i=0;i<n;i++){
		int l=0;
		for(int j=0;j<n;j++){
			cin >> z;
			if(z=='.'){
				l++;
				if(l>mx)mx=l;
			}
			else if(z=='#'){
				l=0;
			}
		}
		
	}
	cout << mx*mx << endl;
	}
}