#include <iostream>
using namespace std;
int main()
{
int a[10],l=0;
    
    
    char z;
    while(cin >> z)
{
    if(z=='+')
        {
      	if(l<=9)
          {
          	cin >> a[l];
    		 l++;
           	cout << ":)" << endl;
          }
          else cout << ":(" << endl;
        }
    if(z=='-')
    	{
    		
    		if(l>=1)
    		{
    		 cout << a[l-1] << endl;
    		l--;
    		}
    		else cout << ":(\n";
       }
        
    
}
    
    


return 0;
}
