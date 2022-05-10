#include <iostream>
#include <sstream>

using namespace std;

int main() {
	
	/*
	0-N
	1-S
	
	
	
	2-W
	3-E
	
	
	*/

		int k,a,b,ns,we,z;
		cin >> z;
		for(int j=0;j<z;j++)
		{
		
		cin >> k;
		ns=0;
		we=0;
		for(int i=0;i<k;i++)
		{
			cin >> a >> b;	
			if(a==0)ns+=b;
			else if(a==1)ns-=b;
			else if(a==2)we+=b;
			else if(a==3)we-=b;
			
		}
		if(we==0&&ns==0)cout << "studnia";
		else if(we==0)
		{
			if(ns>0)cout << 0 << ' ' << ns;
			else if(ns<0)cout << 1 << ' ' << -ns;
			
		}
		else if(ns==0)
		{
			if(we>0)cout << 2 << ' ' << we;
			else if(we<0)cout << 3 << ' ' << -we;
			
			
		}
		else
		{
			if(ns>0)cout << 0 << ' ' << ns;
			if(ns<0)cout << 1 << ' ' << -ns;
			cout << endl;
			if(we>0)cout << 2 << ' ' << we;
			if(we<0)cout << 3 << ' ' << -we;
			
		}
		cout << endl;
		
	}
	return 0;
}
