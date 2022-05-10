#include <iostream>
using namespace std;

int main() {
	long long a,k;
	cin >> k;
	for(int i=0;i<k;i++)
	{
	cin >> a;
	if(a==1||a==0)cout << "0 1";
	else if(a==2)cout << "0 2";
	else if(a==3)cout << "0 6";
	else if(a==4)cout << "2 4";
	else if(a==5||a==6||a==8)cout <<"2 0";
	else if(a==7)cout << "4 0";
	else if(a==9)cout << "8 0";
	else cout << "0 0";
	cout << endl;
	}
	return 0;
}