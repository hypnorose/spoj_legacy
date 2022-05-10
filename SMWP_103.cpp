#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;double temp;
	while(n--){
		cin >> temp;
	//	cout << n << " ";
		if(temp<=0){
			cout << "NIE" << endl;
			continue;
		}
		
		temp=sqrt(temp);
		unsigned long long b=temp*1000000;
		if(b%1000000==0)cout << "TAK" << endl;
		else cout << "NIE" << endl;
		
	}
}
