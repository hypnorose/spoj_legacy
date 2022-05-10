#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			if(s[i]=='Q')cout << 'A';
			else if(s[i]=='W')cout << 'B';
		 	else if(s[i]=='E')cout << 'C';
			else if(s[i]=='R')cout << 'D';
			else if(s[i]=='T')cout << 'E';
			else if(s[i]=='Y')cout << 'F';
			else if(s[i]=='U')cout << 'G';
			else if(s[i]=='I')cout << 'H';
			else if(s[i]=='O')cout << 'I';
			else if(s[i]=='P')cout << 'J';
			else if(s[i]=='A')cout << 'K';
			else if(s[i]=='S')cout << 'L';
			else if(s[i]=='D')cout << 'M';
			else if(s[i]=='F')cout << 'N';
			else if(s[i]=='G')cout << 'O';
			else if(s[i]=='H')cout << 'P';
			else if(s[i]=='J')cout << 'Q';
			else if(s[i]=='K')cout << 'R';
			else if(s[i]=='L')cout << 'S';
			else if(s[i]=='Z')cout << 'T';
			else if(s[i]=='X')cout << 'U';
			else if(s[i]=='C')cout << 'V';
			else if(s[i]=='V')cout << 'W';
			else if(s[i]=='B')cout << 'X';
			else if(s[i]=='N')cout << 'Y';
			else if(s[i]=='M')cout << 'Z';
			else cout << " ";
			
			
			
			
			
			
		}
		cout << endl;
	}
	
	return 0;
}