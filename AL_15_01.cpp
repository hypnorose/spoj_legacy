#include <iostream>

using namespace std;

int main()
{
    int pkt=0;
    string darek,jarek,marek;
    cin >> darek >> jarek >> marek;
    for(int i=0; i<darek.length(); i++)
    {
        if(jarek[i]!=darek[i])
        {
            pkt++;
            if(jarek[i]==marek[i])pkt++;

        }
        else if(marek[i]!=darek[i])pkt++;



    }
    cout << pkt;
}
