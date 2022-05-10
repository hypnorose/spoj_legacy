#include <stdio.h>
#include <string.h>
#define MSIZE 4000003
#define true 1
#define false 0



typedef struct Number{
	int value;
	int howmany;
	int filled;
}Number;
struct Number tab[MSIZE];
int tmp;
int ch;
int sign;
void getInt(int *n)  //pass an integer by value
{
  tmp = 0;
  ch = getchar_unlocked();
  sign = 1;
 
  while (ch<'0' || ch>'9')  // if the input character is not a digit
  {
    if (ch == '-')
    {
      sign = -1;
    }
    ch = getchar_unlocked();
  }
 
  while (ch >= '0' && ch <= '9')
  {
    tmp = (tmp << 3) + (tmp << 1) + ch - '0';  //multiply by 10
    ch = getchar_unlocked();
  }
  
  tmp *= sign;  // for negative numbers
*n = tmp;
	
}



int main() {

//	memset(tab,0,sizeof(Number)*MSIZE);
	int n,m;
	int xD;
	int i,tmp;
	int h,num;
	getInt(&n);
	while(n--){
		getInt(&xD);
		num = xD;

		num = num%MSIZE;
		if(num < 0)num+=MSIZE;
		h = num%MSIZE;
	
		while(tab[h].filled==true && tab[h].value!=xD){
			h++;
		}
		tab[h].filled=true;
		tab[h].value = xD;
		tab[h].howmany++;
	}
	getInt(&m);
//	char tak[6]="Tak \n";
//	char nie[6]="Nie \n";
//	char brak[6]="brak\n";
	//char bufor[1600000];
//	n=0;
	while(m--){
		getInt(&xD);
	//	xD = get(xD);
		num = xD;

		num = num%MSIZE;
		if(num < 0)num+=MSIZE;
		h = num%MSIZE;
		while(tab[h].filled==true && tab[h].value!=xD){
			h++;
		}

			xD = tab[h].howmany;		

		if(xD>=3){
			putchar_unlocked('T');
			putchar_unlocked('a');
			putchar_unlocked('k');
			putchar_unlocked('\n');
		}
		else if(xD==0){
				putchar_unlocked('b');
					putchar_unlocked('r');
			putchar_unlocked('a');
			putchar_unlocked('k');
			putchar_unlocked('\n');
			
		}
		
		else {
			{
			putchar_unlocked('N');
			putchar_unlocked('i');
			putchar_unlocked('e');
			putchar_unlocked('\n');
		}
		}
//		n+=5;
		
	}
	//write(1,bufor,n);
	//fwrite(bufor,sizeof(char),n,stdout);
	return 0;
}