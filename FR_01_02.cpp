#include <iostream>

using namespace std;

int main()
{
    unsigned long long a1,a2,b1,b2,p,q,temp,mian;
    char z;
    cin >> a1 >> z >> a2 >> b1 >> z >> b2;
    cout << a1 << "/" << a2 << " + " << b1 << "/" << b2 << " = ";
    p=a2;
    q=b2;


    while(p!=0)
    {

        temp=p;
        p=q%p;
        q=temp;


    }
    mian=(a2*b2)/q;

    a1*=mian/a2;
    b1*=mian/b2;
    p=a1+b1;
    q=mian;
 while(p!=0)
    {

        temp=p;
        p=q%p;
        q=temp;


    }
    cout << (a1+b1)/q<< "/" << mian/q;


}
