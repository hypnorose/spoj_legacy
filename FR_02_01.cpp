#include <iostream>
#include <math.h>

using namespace std;
struct funkcja
{
    funkcja() : nof(false){}
    double a;
    double b;
    bool nof;
};
funkcja o(int x1, int y1, int x2, int y2)
{
    funkcja f;
    double a,b;
    b=y2-y1;
    a=x2-x1;
   //  cout << b << " " << a << endl;
    if(b!=0&&a!=0)
    {
        a=b/a;
        f.a=-1/a;
        a=x2+x1;
        a=a/2;
        b=y2+y1;
        b=b/2;
        //cout << a << " " << b << endl;

        f.b=b-f.a*a;
        //cout <<  f.a << " " << f.b << endl;
    }
    else if(a==0)
    {
        f.a=0;
        f.b=y2+y1;
        f.b=f.b/2;
    }
    else
    {
        f.a=x2+x1;
        f.a=f.a/2;
        f.nof=true;
    }
    return f;
}


int main()
{
    double a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    funkcja k=o(a,b,c,d);
    funkcja j=o(a,b,e,f);

    //cout << "k: " << k.a << " " << k.b << " " << k.nof <<  endl;
    //cout << "j: " << j.a << " " << j.b << " " << j.nof <<  endl;
    double x,y;
    if(k.nof)
    {
        x=k.a;
        y=j.a*x+j.b;

    }
    else if(j.nof)
    {
         x=j.a;
        y=k.a*x+k.b;

    }
    else{
        x=k.a-j.a;
        y=j.b-k.b;
        x=y/x;
        y=k.a*x+k.b;

    }
  //  cout << x << " " << y << endl;
       x=(x-a)*(x-a)+(y-b)*(y-b);
       x=sqrt(x);

       cout.precision(2);
        cout <<fixed<< x;
}
