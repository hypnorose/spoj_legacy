#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;unsigned long long h;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> h;
		double w=(8*h+1);
		int x=sqrt(w)*100000;
		if(x%10000==0)cout << "TAK" << endl;
		else cout << "NIE" << endl;
		//cout << x;
	}
	return 0;
}