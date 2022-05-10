#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{

// insert code here...
int tab[256] = {0};
unsigned char c;
while (scanf("%c",&c)!= EOF) {
tab[static_cast<int>(c)] += 1;
}
for (int i = 0; i < 256; i++) {
if (tab[i] != 0) {
cout << i << " " << tab[i] << endl;
}
}
return 0;
} 