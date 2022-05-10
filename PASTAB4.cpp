#include <iostream>
#include <cmath>
using namespace std;
int tab[30];
int main(){
	int a,m=0;
	while(cin >> a){
		tab[a+10]++;
		if(tab[a+10]>m)m=tab[a+10];
		//cout << a << endl;
	}
	for(int i=-10;i<=10;i++){
		if(i==-10);
		else if(i>-10&&i<0)cout << " ";
		else if(i>=0&&i<10)cout << "  ";
		else if(i==10)cout << " ";
		cout << i << ":|";
		double j=0;
	//	cout << tab[i+10] << endl;
	
		for(;j<round((double)30*tab[i+10]/m);j++)cout << "*";
		for(;j<30;j++)cout << " ";
		
		cout << "|";// << tab[i+10] << " " << round((double)30*tab[i+10]/m);
		cout << endl;
	}
	
}