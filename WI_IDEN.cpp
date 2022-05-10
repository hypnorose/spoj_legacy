#include <iostream>
using namespace std;

int main() {
	int l;string wyraz;
	cin >> l >> wyraz;
	
	if(wyraz.length()<=l){
		cout << wyraz;
		return 0;
		
	}//############### USUWAMY _
	string temp="";
	for(int i=wyraz.length()-1;i>=0;i--)
	{
		if(wyraz[i]!='_'||temp.length()+i+1<=l)
		temp+=wyraz[i];
	
		
		
		
		
	}
	wyraz="";
	for(int i=temp.length()-1;i>=0;i--)
	{
		
		wyraz+=temp[i];
		
		
	}
	if(wyraz.length()<=l){
		cout << wyraz;
		return 0;
		
	}
	//####### USUWAMY CYFRY
	temp="";
	for(int i=wyraz.length()-1;i>=0;i--)
	{
		if(wyraz[i]<48||wyraz[i]>57||temp.length()+i+1<=l)
		temp+=wyraz[i];
		
		
		
		
	}
		wyraz="";
	for(int i=temp.length()-1;i>=0;i--)
	{
		
		wyraz+=temp[i];
		
		
	}
	if(wyraz.length()<=l){
		cout << wyraz;
		return 0;
		
	}//####### USUWAMY SAMOG£OSKI OMG TO TRUDNE
	temp="";int pierwsza=-1;
	for(int i=0;i<wyraz.length()-1;i++){
		if(wyraz[i]==65||wyraz[i]==69||wyraz[i]==73||wyraz[i]==79||wyraz[i]==89||wyraz[i]==85){pierwsza=i;break;
	}}
	
		for(int i=wyraz.length()-1;i>=0;i--)
	{
		
		
		
		if(i==pierwsza||wyraz[i]!=65&&wyraz[i]!=69&&wyraz[i]!=73&&wyraz[i]!=79&&wyraz[i]!=89&&wyraz[i]!=85||temp.length()+i+1<=l)
		temp+=wyraz[i];
		
		
		
		
	}
	
	wyraz="";
	for(int i=temp.length()-1;i>=0;i--)
	{
		
		wyraz+=temp[i];
		
		
	}

	if(wyraz.length()<=l){
		cout << wyraz;
		return 0;
		
	}
	//## SKRACANIE OSTATECZNE
	temp="";
	for(int i=wyraz.length()-1;i>=0;i--)
	{
		if(temp.length()+i+1<=l||i==wyraz.length()-1)
		temp+=wyraz[i];
	
		
		
		
		
	}
		wyraz="";
	for(int i=temp.length()-1;i>=0;i--)
	{
		
		wyraz+=temp[i];
		
		
	}
	
	if(wyraz.length()<=l){
		cout << wyraz;
		return 0;
		
	}
	
	
	
	return 0;
}