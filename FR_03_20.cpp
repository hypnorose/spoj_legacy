#include <iostream>
using namespace std;
int main() {
	int k,w;
	cin >> k;
	while(k--){
		w=0;
	string a,b;
	cin >> a >> b;
	for(int i=0;i<b.length();i++){if(b[i]=='1'){if(a[i]=='1');else w=1;}if(b[i]=='2'){if((a[i]>='A'&&a[i]<='C')||(a[i]>='a'&&a[i]<='c')||a[i]=='2');else w=1;}if(b[i]=='3'){if((a[i]>='D'&&a[i]<='F')||(a[i]>='d'&&a[i]<='f')||a[i]=='3');else w=1;}else if(b[i]=='4'){if((a[i]>='G'&&a[i]<='I')||(a[i]>='g'&&a[i]<='i')||a[i]=='4');else w=1;}
		if(b[i]=='5'){if((a[i]>='J'&&a[i]<='L')||(a[i]>='j'&&a[i]<='l')||a[i]=='5');else w=1;}
		if(b[i]=='6'){if((a[i]>='M'&&a[i]<='O')||(a[i]>='m'&&a[i]<='o')||a[i]=='6');else w=1;}
		if(b[i]=='7'){if((a[i]>='P'&&a[i]<='S')||(a[i]>='p'&&a[i]<='s')||a[i]=='7');else w=1;}
		else	if(b[i]=='8')
		{
			if((a[i]>='T'&&a[i]<='V')||(a[i]>='t'&&a[i]<='v')||a[i]=='8');else w=1;
			
			
		}
		if(b[i]=='9')
		{
			if((a[i]>='W'&&a[i]<='Z')||(a[i]>='w'&&a[i]<='z')||a[i]=='9');else w=1;
			
			
		}
		if(b[i]=='0')
		{
			if(a[i]=='0');
			else w=1;
		}
		
		
	}

	if(w==0)
	cout << "TAK - " << a;
	else cout << "NIE";
	cout << endl;
	}
	
	return 0;
}