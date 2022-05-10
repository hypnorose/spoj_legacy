#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        unsigned long long A,B,C,a,b,c;
        cin >> A >> B >> C >> a >> b >> c;
        if(A*a>B*b)
        {
            swap(A,B);
            swap(a,b);
        }
        if(A*a>C*c)
        {
            swap(A,C);
            swap(a,c);
        }
        if(B*b>C*c)
        {
            swap(B,C);
            swap(b,c);

        }
        long long licznik=0,a1=A*a,b1=B*b,c1=C*c;
        licznik+=a1+a;
        b1-=a1+a;
        c1-=a1+a;

        if(b1<0)b1=0;
        licznik+=b1+b;
        c1-=b1+b;


        if(c1<0)c1=0;
        licznik+=c1+c;
cout << licznik << endl;





    }
}


