#include <iostream>
#include <cmath>
using namespace std;
#define INF 10000000
bool era[INF];
int prep[INF];
int main(){
	int h=0;
	for(int i=2;i<INF;i++){
		if(era[i])continue;
		prep[h]=i;
		h++;
		for(int j=i*2;j<INF;j+=i)era[j]=1;
		
	}
	int n;
	cin >> n;int t;
	while(n--){
		cin >> t;
	int start=0;int end=h-1;	
	int mid;
	while(start<end){
		mid=(start+end+1)/2;
		if(t>=prep[mid])start=mid;
		else end=mid-1;
	}
	if(abs(t-prep[start])>abs(t-prep[start+1]))
	cout << prep[start+1] << endl;
	else cout << prep[start] << endl;
	
	
	}
}