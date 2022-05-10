#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char imie[100][200];
	int m[100],w[100],k,z;
	double tempm,tempw;
	cin >> z;
	for(int i=0;i<z;i++)
	{
		cin >> imie[i];
		cin >> m[i];
		cin >> w[i];		
		
	}
	cout << "niedowaga" << endl;
	for(int i=0;i<z;i++)
	{
	double tempm=m[i];
	double tempw=w[i];	
		double bmi=tempm/(tempw*tempw)*10000;
		if(bmi<18.5)cout << imie[i] << endl;
	}
	cout << "wartosc prawidlowa" << endl;
		for(int i=0;i<z;i++)
	{
	double tempm=m[i];
	double tempw=w[i];	
		double bmi=tempm/(tempw*tempw)*10000;
		if(bmi>=18.5&&bmi<=25)cout << imie[i] << endl;
	}
	cout << "nadwaga" << endl;
			for(int i=0;i<z;i++)
	{
	double tempm=m[i];
	double tempw=w[i];	
		double bmi=tempm/(tempw*tempw)*10000;
		if(bmi>25)cout << imie[i] << endl;
	}
	
	
	
	
	
	
	return 0;	
}
