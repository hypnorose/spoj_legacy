#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
   long long k,suma=0,maxsuma=0;
    for(int i=0; i<n; i++)
    {
        cin >> k;

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
       // cout << "suma: " << suma << " maxsuma: " << maxsuma << endl;
    }
    if(suma>maxsuma){
        cout << suma;

    }
    else cout << maxsuma;



}
