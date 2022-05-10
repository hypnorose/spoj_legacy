#include <iostream>
using namespace std;

int main() {
	string a;
	while(getline(cin,a))
	{
		for(int i=0;i<a.length();i++)	
		{
			if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='=')
			{
				cout << '#';
				i+=2;
			}
			else if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='/')
			{
				cout << (char)92;
				i+=2;
			}
			else 	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]==39)
			{
				cout << '^';
				i+=2;
			}
			else	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='(')
			{
				cout << '[';
				i+=2;
			}
			else	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]==')')
			{
				cout << ']';
				i+=2;
			}
			else	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='!')
			{
				cout << '|';
				i+=2;
			}else 	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='<')
			{
				cout << '{';
				i+=2;
			}
			else 	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='>')
			{
				cout << '}';
				i+=2;
			}else	if(a[i]=='?'&&a[i+1]=='?'&&a[i+2]=='-')
			{
				cout << '~';
				i+=2;
			}else
			
		
			{
				cout << a[i];
				
			}
			
		
			
			
		}
		cout << endl;
		
	}
	return 0;
}