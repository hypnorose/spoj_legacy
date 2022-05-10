#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int h;
	cin >>h;
	while(h--){
	double l;
	cin >> l;
	if(l==0){cout << "0 0 0 0" << endl;continue;}
	string bin="",nbin="",bin2="";
	double poprzec;int przedprzec,znak=0;
	if(l>0){poprzec=l-floor(l);przedprzec=floor(l);}
	else {poprzec=-1*(l-ceil(l));przedprzec=ceil(l);znak=1;}
	int p=przedprzec;
	do{
		if(p%2==0)bin+="0";
		else bin+="1";
		p/=2;
		
		
	}while(p!=0);
	
	for(int i=bin.length()-1;i>=0;i--){
		nbin+=bin[i];
		
		
	}
	while(poprzec!=0&&bin2.length()<23-nbin.length()){
		poprzec*=2;
		
		if(poprzec>=1){bin2+="1";poprzec-=1;}
		else bin2+="0";
		
	}
	
//	cout <<  nbin << " " << bin2 << endl;
	int wykl;
	
	if(nbin=="0"){
		for(int i=0;i<=bin2.length();i++){
			if(bin2[i]=='1'){wykl=-1*(i+1);break;}
		}
		
	}
	else{
	wykl=nbin.length()-1;		
		
	}
//	cout << wykl;
	int nwykl=127+wykl;
	string binwykl="";
	do{
		if(nwykl%2==0)binwykl+="0";
		else binwykl+="1";
		nwykl/=2;
		
		
	}while(nwykl!=0);
	string nbinwykl="";
		for(int i=binwykl.length()-1;i>=0;i--){
		nbinwykl+=binwykl[i];
		
		
	}
//	cout << endl << nbinwykl;
	
	string ost="";
	if(l>=0)ost+="0";
	else ost+="1";
	for(int i=0;i<8-nbinwykl.length();i++)ost+="0";
	ost+=nbinwykl;
	if(nbin=="0")for(int i=-1*wykl;i<bin2.length();i++){ost+=bin2[i];}
	else{
		for(int i=1;i<nbin.length();i++)ost+=nbin[i];
		ost+=bin2;
		
	}
	for(int i=ost.length();i<=32;i++){
		ost+="0";
		
	}
//	cout <<  ost << endl;
	int fl=0;
	int temp=0,mn=8;
	for(int i=0;i<=ost.length();i++){
		if(ost[i]=='1')temp+=mn;
		mn/=2;
		
		if(i%4==3){
			if(temp==15)cout <<"f";
			else if(temp==14)cout <<"e";
			else if(temp==13)cout <<"d";
			else if(temp==12)cout <<"c";
			else if(temp==11)cout <<"b";
			else if(temp==10)cout <<"a";
			else if(temp==0){if(i%8==7)cout << "0";}
			else cout << temp;
			mn=8;temp=0;
		}
		if(i%8==7){
	
		
			cout << " ";
		}
		
		
		
	}
	cout << endl;
//	int licznik=1;
//	cout << endl << ost.length() << endl;
//	for(int i=0;i<ost.length();i++){
//	cout << ost[i];
	//	if(i%8==0)cout << " ";
//		cout << i << " ";
	//	if(licznik==8){cout << " ";licznik=0;}
		
	//	licznik++;
		
//	}

	}
	return 0;
}