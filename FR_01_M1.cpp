#include <iostream>
using namespace std;
int main(){
	int h;
	cin >> h;
	
	while(h--){
	int p,l;
	cin >> l >> p;
	unsigned long long w=p-1;
	if(l==1){
		cout << p << endl;
		continue;
	}
	for(int i=1;i<l;i++){
		w*=p;
	}
	cout << w << endl;
	}

}
