#include <iostream>
using namespace std;
 
int main()
 
{ 
int a,b;
char z;
 
 while(	cin>>z>>a>>b)
 {
 	if(z=='+')
 		cout<<a+b<<endl;
 	if(z=='-')
 		cout<<a-b<<endl;
 	if(z=='*')
 		cout<<a*b<<endl;
 	if(z=='/')
 		cout<<a/b<<endl;
 	if(z=='%')
 		cout<<a%b<<endl;
 
 
 
 
 }
 
		return 0;
}
 