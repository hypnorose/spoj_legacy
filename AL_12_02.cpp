#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int start=clock();
        unsigned long long licznik=0;
        int r;
        cin >> r;
        int i=r;
        for(int j=0; j<r; j++)
        {
            //cout << "i:" << i <<" j:"<<j<<endl;
            if(i*i+j*j<=r*r){licznik+=i;//cout << licznik << endl;
            }
            else
            {
                j--;
                i--;


            }
        }


        licznik*=4;
        licznik++;
        cout << licznik << endl;

      //  int stop=clock();

       // cout << stop-start << endl;
    }
}
