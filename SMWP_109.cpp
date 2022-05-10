#include <iostream>
using namespace std;
int main()
{

    int n;cin>>n;while(n--){

    int p;
    string a,b;
    cin >> p >> a >> b;
    if(a.length()>b.length())
    {
        while(a.length()!=b.length())
        {
            b="0"+b;

        }
    }
    else
    {
        while(a.length()!=b.length())
        {
            a="0"+a;

        }

    }
    //cout << a << " " << b;
    int taba[a.length()];
    int tabb[b.length()];
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]>47&&a[i]<58)taba[i]=a[i]-48;
        else taba[i]=a[i]-55;
    }
    for(int i=0; i<b.length(); i++)
    {
        if(b[i]>47&&b[i]<58)tabb[i]=b[i]-48;
        else tabb[i]=b[i]-55;
    }
    int suma[a.length()+1],r=0;
    int si=0;

    for(int i=a.length()-1; i>=0; i--)
    {
        r+=taba[i]+tabb[i];

        if(r>=p)
        {
            r-=p;
            suma[si]=r;
            r=1;
        }
        else
        {
            suma[si]=r;
            r=0;
        }

        si++;

    }
    int len=a.length();
    if(r==1)
    {
        suma[si]=1;
    }
    else len--;

    for(int i=len; i>=0; i--)
    {
        if(suma[i]>=0&&suma[i]<10)cout << suma[i];
        else
        {
            char z=suma[i]+55;
            cout << z;
        }
    }
    cout << endl;
}
}

