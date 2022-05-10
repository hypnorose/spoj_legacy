#include <iostream>
using namespace std;
int main()
{
	string z;
	string a,b;
	while(cin >> a >> z >> b)
	{
		if(z=="!=")
		{
			if(a!=b)cout << "1";
			else cout << "0";
		}
		if(z=="==")
		{
			if(a==b)cout << "1";
			else cout << "0";
		}
		if(z==">=")
		{
			if(a.length()>b.length())cout << "1";
			else if(a.length()<b.length())cout << "0";
			else
			{
				for(int i=0;i<a.length();i++)
				{
					if((int)a[i]>b[i])
					{
					cout<<"1";
					break;
					}
					else if((int)a[i]<b[i])
					{
						cout <<"0";
						break;
						
					}
					
					
					
				}
				
				
				
			}
			
		}
		
		
		if(z=="<=")
		{
			if(a.length()<b.length())cout << "1";
			else if(a.length()>b.length())cout << "0";
			else
			{
				for(int i=0;i<a.length();i++)
				{
					if((int)a[i]<b[i])
					{
					cout<<"1";
					break;
					}
					else if((int)a[i]>b[i])
					{
						cout <<"0";
						break;
						
					}
					
					
					
				}
				
				
				
			}
			
		}
		
		
		cout << endl;
		
	}

	
	
	
	
	
	return 0;
}

