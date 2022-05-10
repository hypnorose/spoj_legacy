#include <iostream>
using namespace std;

int main() {
	string a;
	int k;
	cin >> k;
	for(int h=0;h<k;h++)
	{
	
				cin >> a;
				
				for(int i=0;i<a.length();i++)
				{
					if((a.length()-i)%3==0)
					{
						if(a[i]=='1')cout << "sto";
						else	if(a[i]=='2')cout << "dwiescie";
						else	if(a[i]=='3')cout << "trzysta";
						else	if(a[i]=='4')cout << "czterysta";
						else	if(a[i]=='5')cout << "piecset";
						else	if(a[i]=='6')cout << "szescset";
						else	if(a[i]=='7')cout << "siedemset";
						else	if(a[i]=='8')cout << "osiemset";
						else	if(a[i]=='9')cout << "dziewiecset";
						if(a[i]!='0')cout << " ";
					}
					if((a.length()-i)%3==2)
					{
						
								if(a[i]=='1'){
									if(a[i+1]=='0')cout << "dziesiec";
									else	if(a[i+1]=='1')cout << "jedenascie";
									else	if(a[i+1]=='2')cout << "dwanascie";
									else	if(a[i+1]=='3')cout << "trzynascie";
									else	if(a[i+1]=='4')cout << "czternascie";
									else	if(a[i+1]=='5')cout << "pietnascie";
									else	if(a[i+1]=='6')cout << "szesnascie";
									else	if(a[i+1]=='7')cout << "siedemnascie";
									else	if(a[i+1]=='8')cout << "osiemnascie";
									else	if(a[i+1]=='9')cout << "dziewietnascie";
										
										
									}
							
						else	if(a[i]=='2')cout << "dwadziescia";
						else	if(a[i]=='3')cout << "trzydziesci";
						else	if(a[i]=='4')cout << "czterdziesci";
						else	if(a[i]=='5')cout << "piecdziesiat";
						else	if(a[i]=='6')cout << "szescdziesiat";
						else	if(a[i]=='7')cout << "siedemdziesiat";
						else	if(a[i]=='8')cout << "osiemdziesiat";
						else	if(a[i]=='9')cout << "dziewiecdziesiat";
						
						if(a[i]!='0')cout << " ";
					
						
						
						
						
					
						
					}
						if((a.length()-i)%3==1&&a[i-1]!='1')
						{
					
							if(a[i]=='1')cout << "jeden";
						else	if(a[i]=='2')cout << "dwa";
						else	if(a[i]=='3')cout << "trzy";
						else	if(a[i]=='4')cout << "cztery";
						else	if(a[i]=='5')cout << "piec";
						else	if(a[i]=='6')cout << "szesc";
						else	if(a[i]=='7')cout << "siedem";
						else	if(a[i]=='8')cout << "osiem";
						else	if(a[i]=='9')cout << "dziewiec";
							if(a[i]!='0')cout << " ";
							
							
						}
					if((a.length()-i)==4)if(a[i-1]!='0'||a[i-2]!='0'||a[i]!='0')cout << "tys.";	
					if((a.length()-i)==7)if(a[i-1]!='0'||a[i-2]!='0'||a[i]!='0')cout << "mln.";	
					if((a.length()-i)==10)if(a[i-1]!='0'||a[i-2]!='0'||a[i]!='0')cout << "mld.";
					if((a.length()-i)==13)if(a[i-1]!='0'||a[i-2]!='0'||a[i]!='0')cout << "bln.";
						
						
					if((a.length()-i)==4||(a.length()-i)==7||(a.length()-i)==10||(a.length()-i)==13)if(a[i-1]!='0'||a[i-2]!='0'||a[i]!='0')cout << " ";
					
			
				}

		cout << endl;
	}

	return 0;
}