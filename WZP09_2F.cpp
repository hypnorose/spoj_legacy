#include <iostream>
using namespace std;

int main() {
	
	string a;
	while(cin >> a && a!="0")
	{
		int w=0;
		if(a[a.length()-1]=='5'||a[a.length()-1]=='0')w++;
		int suma=0; 
		for(int i=0;i<a.length();i++)
		{
			suma+=(int)a[i]-48;
			
			
		}
		if(suma%3==0)w++;
	
		if(w==2)cout << "TAK";
		else cout << "NIE";
		cout << endl;
	}
	return 0;
}