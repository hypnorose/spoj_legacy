#include <iostream>
#include <algorithm>
using namespace std;

int tab[1<<20];
int main() {
	int n;
	cin >> n;
	int w,l;
	int licznik=0;
	while(n--){
		cin >> l >> w;
		for(int i=0;i<l;i++)cin >> tab[i];
		sort(tab,tab+l);
		licznik=0;
		int i=0,j=l-1;
		while(i<j){
			//cout << tab[i] << " " << tab[j] << endl;
		if(tab[i]+tab[j]<=w){
			i++;
			j--;
			licznik++;
		}
		else{
			j--;
			licznik++;
		}
		}
		if(i==j)licznik++;
		cout << licznik << endl;
	}
	return 0;
}