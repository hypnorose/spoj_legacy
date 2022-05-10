#include <iostream>
using namespace std;
int main()
{
    long long h,fib[50];
    cin >> h;
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<50;i++){
    fib[i]=fib[i-1]+fib[i-2];

    }
    while(h--)
    {
        string a,b;
        long long taba[26],tabb[26],w;
        cin >> a >> b >> w;
        for(int i=0; i<26; i++)
        {
            taba[i]=0;
            tabb[i]=0;
        }
        for(int i=0; i<a.length(); i++)
        {
            taba[a[i]-97]++;
        }
        for(int i=0; i<b.length(); i++)
        {
            tabb[b[i]-97]++;
        }
        if(w==1)for(int i=0; i<26; i++)
            {
                cout << taba[i] << " ";
            }
        else if(w==2)for(int i=0; i<26; i++)
            {
                cout << tabb[i] << " ";
            }
        else
        {
            for(int i=0;i<26;i++){
            taba[i]=taba[i]*fib[w-3];

            tabb[i]=tabb[i]*fib[w-2];

            taba[i]=taba[i]+tabb[i];
            cout << taba[i] << " ";
            }

        }

        cout << endl;
    }
}
