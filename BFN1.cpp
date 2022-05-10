#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;


int main() {
	string a,c;
	
	int b[100],w=0,z=5,k;
	cin >> k;
	
	for(int h=0;h<k;h++)
	{
	cin >> a;
	int zl=0;
					while(w!=2)
					{
					
							int j=a.length()-1,w=0,temp1,temp2;
							string c="\0";
							for(int i=0;i<a.length();i++)
							{
								if(a[i]!=a[j])w=1;
								c+=a[j];	
											
								j--;
							}
							if(w==1)
							{
							
							istringstream ints1(a),ints2(c);
							
							ints1 >> temp1;
							ints2 >> temp2;
							
							
									
									temp1+=temp2;
									ostringstream str;
								 	str << temp1;
									a=str.str();
									zl+=1;
							}
							else 
							{
								cout << a << " " << zl << endl;
								break;
						
							}
					}
							
}
			
	
		
	
	
	return 0;	
}

