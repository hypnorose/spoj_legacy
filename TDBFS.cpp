#include <bits/stdc++.h>
#define INF (1<<18)
using namespace std;
bool discovered[INF];
void dfs(int w,vector <int> edges[INF]){
    discovered[w]=1;
    cout << w << " ";
    for(int i=0;i<edges[w].size();i++){
        if(!discovered[edges[w][i]])dfs(edges[w][i],edges);
    }
}
void bfs(int w,vector <int> edges[INF]){
    queue <int> q;
    q.push(w);
    
    
    while(!q.empty()){
        w=q.front();
        q.pop();
        if(discovered[w])continue;
        //cout << discovered[w] << endl;
        discovered[w]=1;
        cout << w << " ";
       
        for(int i=0;i<edges[w].size();i++){
            if(!discovered[edges[w][i]])q.push(edges[w][i]);
            
        }
        
       
       
    }
}



int main(){
        int baleron;
        cin >> baleron;
        for(int nbh=1;nbh<=baleron;nbh++){
            
        vector <int> edges[INF];
        int h;
        cin >> h;
        for(int i=1;i<=h;i++){
            int n,w;
            cin >> w >> n;
            //cout << w << " " << n << endl;
            int temp;
            for(int i=0;i<n;i++){
                cin >> temp;
                edges[w].push_back(temp);
                
            }
        
            
            
            
            
        }
            cout << "graph " << nbh << endl;
           //for(int i=0;i<=h;i++)discovered[i]=0;
            int temp2,temp;
            while(cin >> temp >> temp2)
            {
                if(temp==0&&temp2==0)break;
                 for(int i=0;i<=h;i++)discovered[i]=0;
                if(temp2==1)bfs(temp,edges);
                else dfs(temp,edges);
                cout << endl;
            }
        }
            
}