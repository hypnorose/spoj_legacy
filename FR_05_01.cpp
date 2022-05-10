#include <iostream>
using namespace std;

int main() {
	int h;
	cin >> h;
	while(h--){
	string a;int l,k;
	cin >> a >> k;
	if(a=="Pn")l=1;
	else if(a=="Wt")l=2;
	else if(a=="Sr")l=3;
	else if(a=="Cz")l=4;
	else if(a=="Pt")l=5;
	else if(a=="So")l=6;
	else if(a=="Nd")l=0;
	k+=l;
	k=k%7;
	if(k==1)cout << "Pn";
	else if(k==2)cout << "Wt";
	else if(k==3)cout << "Sr";
	else if(k==4)cout << "Cz";
	else if(k==5)cout << "Pt";
	else if(k==6)cout << "So";
	else if(k==0)cout << "Nd";
	cout << endl;
	}
	return 0;
}