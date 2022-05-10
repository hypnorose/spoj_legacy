#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	while(n--){
	
		int tab[3];
		for(int i=0;i<=2;i++)cin >> tab[i];
		
		if(tab[0]==0&&tab[1]==0&&tab[2]==0){cout << "black" << endl; continue;}
		if(tab[0]==192&&tab[1]==192&&tab[2]==192){cout << "silver" << endl; continue;}
		if(tab[0]==128&&tab[1]==128&&tab[2]==128){cout << "gray" << endl; continue;}
		if(tab[0]==255&&tab[1]==255&&tab[2]==255){cout << "white" << endl; continue;}
		if(tab[0]==128&&tab[1]==0&&tab[2]==0){cout << "maroon" << endl; continue;}
		if(tab[0]==255&&tab[1]==0&&tab[2]==0){cout << "red" << endl; continue;}
		if(tab[0]==128&&tab[1]==0&&tab[2]==128){cout << "purple" << endl; continue;}
		if(tab[0]==255&&tab[1]==0&&tab[2]==255){cout << "fuchsia" << endl; continue;}
		if(tab[0]==0&&tab[1]==128&&tab[2]==0){cout << "green" << endl; continue;}
		if(tab[0]==0&&tab[1]==255&&tab[2]==0){cout << "lime" << endl; continue;}
		if(tab[0]==255&&tab[1]==255&&tab[2]==0){cout << "yellow" << endl; continue;}
		if(tab[0]==128&&tab[1]==128&&tab[2]==0){cout << "olive" << endl; continue;}
		if(tab[0]==0&&tab[1]==0&&tab[2]==128){cout << "navy" << endl; continue;}
		if(tab[0]==0&&tab[1]==0&&tab[2]==255){cout << "blue" << endl; continue;}
		if(tab[0]==0&&tab[1]==128&&tab[2]==128){cout << "teal" << endl; continue;}
		if(tab[0]==0&&tab[1]==255&&tab[2]==255){cout << "aqua" << endl; continue;}
		
		
			cout << "#";
		for(int i=0;i<=2;i++){
		
		int temp=tab[i]/16;
		if(temp<=9)cout << temp;
		else cout << (char)(temp+55);
		
		temp=tab[i]%16;
			if(temp<=9)cout << temp;
		else cout << (char)(temp+55);
		}
		cout << endl;
	}

}
