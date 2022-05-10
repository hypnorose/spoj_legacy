#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	int tab[n];
	for(int i=0;i<n;i++){
		cin >> tab[i];
	}
	int m;
	cin >> m;int mt=1000000;
	int start,end,mid,tmp;
	sort(tab,tab+n);
	
		for(int i=0;i<m;i++){
		cin >> tmp;
		start=0;end=n-1;
		while(start<end){
			mid=(start+end+1)/2;
			if(tmp>tab[mid])start=mid;
			else end=mid-1;
		}
		if(start==0)start++;
		if(start==n-1)start--;
		if(abs(tab[start]-tmp)<mt)mt=abs(tab[start]-tmp);
		if(abs(tab[start-1]-tmp)<mt)mt=abs(tab[start-1]-tmp);
		if(abs(tab[start+1]-tmp)<mt)mt=abs(tab[start+1]-tmp);
		
		start=0;end=n-1;
		while(start<end){
			mid=(start+end)/2;
			if(tmp>=tab[mid])start=mid+1;
			else end=mid;
		}
		start=end;
		if(start==0)start++;
		if(start==n-1)start--;
			if(abs(tab[start]-tmp)<mt)mt=abs(tab[start]-tmp);
		if(abs(tab[start-1]-tmp)<mt)mt=abs(tab[start-1]-tmp);
		if(abs(tab[start+1]-tmp)<mt)mt=abs(tab[start+1]-tmp);
		
	}
	cout << mt;
}