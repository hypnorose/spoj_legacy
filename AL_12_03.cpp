#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double n;
    while(cin >> n)
    {
        while(n > 9)
            n /= 18.0;
        cout << (n <= 1.0 ? "B" : "A");
        cout << endl;
    }
}