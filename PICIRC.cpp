#include <iostream>
using namespace std;
int main(){
	float a,b,r,k,x,y,w;
	cin >> a >> b >> r >> k;
	r=r*r;
	for(int i=0;i<k;i++)
	{
		cin >> x >> y;
		w=(x-a)*(x-a)+(y-b)*(y-b);
		if(w>r){
			cout << "O" << endl;
	
		}
		else if(w==r){
			
			cout << "E" << endl;
			
		}
		else if(w<r){
			
			cout << "I" << endl;
			
		}
		
		
		
	}
	
	
	
	
	
}