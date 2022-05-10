#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
string s;
	while(getline(cin,s)){
		int a=ceil(sqrt(s.length()));
		int j=0;
		for(int i=0;i!=s.length()-1;i+=a){
			if(i>=s.length()){
			j++;
			i=j;
			}
			cout << s[i];
		
		}	
		cout << endl;
		
	}



}
