#include <bits/stdc++.h>
#define INF 15000
//NAJD£U¯SZY WSPÓLNY PODCI¥G
using namespace std;
int max(int a,int b,int c){
    a=max(a,b);
    b=max(a,c);
    return b;
}
int LCS[2][INF];
int n,m;
char N[INF],M[INF];
int main(){
    int h;
    cin >> h;
    while(h--){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> N[i];
        
    }
    cin >> m;
    for(int j=1;j<=m;j++){
        LCS[0][j]=0;
        cin >> M[j];
    }
    //cout << "XDDDDDDDDDDDd" << endl;
    for(int i=1;i<=n;i++){
        int w=i%2;
        LCS[w][0]=0;
        for(int j=1;j<=m;j++){
            if(N[i]==M[j])LCS[w][j]=LCS[!w][j-1]+1;
            else LCS[w][j]=0;
            LCS[w][j]=max(LCS[w][j],LCS[w][j-1],LCS[!w][j]);
            
           // cout << LCS[w][j];
        }
        
        
    }
    
    cout << LCS[n%2][m] << endl;
    }
}