
#include <iostream>
using namespace std;

int main()
{
  	int t,i,temp,segment,nogi;
    cin >> t;
    while ( t != 0 ){
        nogi=0;
        cin >> segment;
        for (i=0;i < segment;i++ ){
           cin >> temp;
           nogi+=temp;
        }
        if ( segment == 1 ) cout << nogi << endl;
        else cout << nogi+segment-1 << endl;
        t--;
    }
}