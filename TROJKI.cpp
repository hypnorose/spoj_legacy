#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct trojka{
    int a,b,c;
    trojka(int ax=0,int bx=0,int cx=0){
        if(bx<ax)swap(bx,ax);
        a=ax;
        b=bx;
        c=cx;
    }
};


trojka primes[100000];
queue <int> q;
bool comp(trojka x,trojka y){
    if(x.a!=y.a)return x.a < y.a;
    else return x.b<y.b;
    
}
int h=1;
int main(){
    int n;
    cin >> n;
    if(n<5)return 1;
    primes[0]=trojka(3,4,5);
    q.push(0);
    int v;
    while(!q.empty()){
        v=q.front();
        q.pop();
        int a=primes[v].a,b=primes[v].b,c=primes[v].c;
        
        primes[h++]=trojka(a-2*b+2*c,2*a-b+2*c,2*a-2*b+3*c);
        if(primes[h-1].a>n||primes[h-1].b>n||primes[h-1].c>n){
            h--;
        }
        else {
            q.push(h-1);
        }
        primes[h++]=trojka(a+2*b+2*c,2*a+b+2*c,2*a+2*b+3*c);
        if(primes[h-1].a>n||primes[h-1].b>n||primes[h-1].c>n){
            h--;
        }
        else {
            q.push(h-1);
        }
        primes[h++]=trojka(-a+2*b+2*c,-2*a+b+2*c,-2*a+2*b+3*c);
        if(primes[h-1].a>n||primes[h-1].b>n||primes[h-1].c>n){
            h--;
        }
        else {
            q.push(h-1);
        }
    }
    
    //sort(primes,primes+h,comp);
    int hu=h;
    for(int i=0;i<hu;i++){
        int a=primes[i].a,b=primes[i].b,c=primes[i].c;
        int j=2;
        while(a*j<=n&&b*j<=n&&c*j<=n){
            primes[h++]=trojka(a*j,b*j,c*j);
            j++;
        }
            
    }
    sort(primes,primes+h,comp);
    for(int i=0;i<h;i++){
        cout << primes[i].a << " " << primes[i].b << " " <<primes[i].c << endl;
        
    }
    
}