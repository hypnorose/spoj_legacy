#include <iostream>
using namespace std;

int main()
{	
int h;
cin >> h;
while(h--){

    int n;
    cin >> n;
   	int k,suma=0,maxsuma=0,mn=-99999;
    for(int i=0; i<n; i++)
    {
        cin >> k;
        if(k>mn)mn=k;
        suma+=k;

        if(suma<0)
        {
            if(suma-k>maxsuma)
            {
                maxsuma=suma-k;
                suma=0;
            }
            suma=0;
        }
        else if(suma-k>suma)
        {
            if(suma-k>maxsuma)maxsuma=suma-k;
        }
   
    }
 
    if(mn<0){
	cout << mn << endl;continue;}
    if(suma>maxsuma)maxsuma=suma;
    cout << maxsuma;

	cout << endl;
}
}
