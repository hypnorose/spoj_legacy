#include <iostream>
using namespace std;

int main() {
	int a,b;
 	cin >> a >> b;
 	int d[a][b];
 	
 	
 	for(int j=0;j<a;j++)
 	{
 		for(int i=0;i<b;i++)cin >> d[j][i];
 
 	}
 	for(int j=0;j<b;j++)
 	{
 
 		for(int i=0;i<a;i++)cout << d[i][j] << " ";
 		cout << endl;
 	}
	return 0;
}