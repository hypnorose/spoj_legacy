#include <iostream>
#include <vector>
#define INF (1<<21)
using namespace std;
vector <int> edges[INF];
int disc[INF];bool flaga=0;
void dfs(int w,int k){
	disc[w]=k;
//	cout << endl << w << " " << k << endl;
	for(int i=0;i<edges[w].size();i++){
		int v=edges[w][i];
		
		if(disc[v]==k){
			flaga=1;
			return;
		}
		else if(disc[v]==0){
			//	cout << "v"<< v << " " << disc[v]<< " ";
			dfs(v,k*(-1));
		}
		
	}	
	
	
}
int main(){
	int h;
	cin >> h;
	while(h--){
	int n,m;
	cin >> n >> m;
	int a,b;flaga=0;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		edges[a].push_back(b);
		edges[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		if(!disc[i])dfs(i,1);
	}
	if(flaga==0)cout << "TAK" << endl;
	else cout << "NIE" << endl;
	for(int i=1;i<=n;i++){
		edges[i].clear();
	}
	for(int i=1;i<=n;i++)disc[i]=0;
	}
}

/*
1
4 3
1 2
2 3
2 4

*/