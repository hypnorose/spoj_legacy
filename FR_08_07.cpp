#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
unsigned long long tab[1<<20];
int main ()
{	
	int n;
	cin >> n;
	unsigned long long a;
	while(n--){
		cin >> a; 
		if(a==0)continue;
		tab[(unsigned long long)ceil(log2(a+1))]++;
	}
 	cin >> n;
 	while(n--){
 		cin >> a;
 	
 		cout << tab[a] << endl;
 		
	 }
  return 0;
}
