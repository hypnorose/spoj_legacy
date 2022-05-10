#include <iostream>

using namespace std;

int main()
{
    string wyraz; int n,k;
    cin >> wyraz >> n;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        if(k==0)cout << wyraz[wyraz.length()-1];
        else if(k>=0)
        {

                for(int j=0;j<wyraz.length()-1;j++)
                {
                    cout << wyraz[j];

                    for(int h=0;h<k-1;h++)cout<<" ";


                }
                cout << wyraz[wyraz.length()-1];
                
        }
        else
        {
                k*=-1;
                for(int j=wyraz.length()-1;j>0;j--)
                {
                    cout << wyraz[j];

                    for(int h=0;h<k-1;h++)cout<<" ";


                }
                cout << wyraz[0];
        }
        if(i!=n-1)cout << endl;
    }
    return 0;

}
