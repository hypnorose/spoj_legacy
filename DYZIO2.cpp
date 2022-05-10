#include <iostream>
using namespace std;
#define INF 1000001
bool tab[INF];int pre[INF];
int main(){
	
	for(int i=2;i<INF;i++){
		if(tab[i])continue;
		for(int j=2*i;j<INF;j+=i){
		tab[j]=1;
		}
	}	
	tab[0]=1;
	tab[1]=1;
	
	for(int i=1;i<INF;i++){
		pre[i]=pre[i-1];
		if(!tab[i])pre[i]++;
		//cout << pre[i] << " ";
	}
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		cout << pre[b]-pre[a-1] << endl;
		
	}

}