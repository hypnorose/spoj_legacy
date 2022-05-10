#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	int a[4]={1,1,1,1},pos[6]={1,2,3,4,5,6};
	for(int i=0;i<4;i++)
	cout << a[i] << " ";
	cout << endl;
	int r[4];
	
	while(cin >> r[0] >> r[1] >> r[2] >> r[3])
	{
		
		
		if(r[0]==-1)pos[a[0]-1]=0;
		if(r[1]==-1)pos[a[1]-1]=0;
		if(r[2]==-1)pos[a[2]-1]=0;
		if(r[3]==-1)pos[a[3]-1]=0;
		
		
		for(int j=0;j<4;j++)
		{
		
			for(int i=0;i<6;i++)
			{
				if(pos[i]!=0&&r[j]!=1)
				{
					a[j]=pos[i];
					i=6;
				}
			}
		}
		for(int i=0;i<4;i++)
	cout << a[i] << " ";
		
		
		
		
	}
	
	
	
	
	
	return 0;	
}

