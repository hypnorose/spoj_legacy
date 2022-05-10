#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string a,b,c,d,e,f,g; int w,i,ig;
    
    //scanf("%*s %s %*s %s %*s %*s %i-%i-%i",...);
    
    while (cin>>a>>b>>c>>d>>e>>f>>g) {
          w=0; ig=1; i=1;
          
          if(b[0]<'A' || b[0]>'Z') ig=0;
          while (b[i]!=';' && ig) {
              //cout<<i;
              if(b[i]<'a' || b[i]>'z') ig=0;
              i++;
              }
          if (ig) w++;
          
          //ig=(int) b[0];
          
          i=1;
          
          if(d[0]<'A' || d[0]>'Z') ig=0;
          while (d[i]!=';' && ig) {
              //cout<<i;
              if(d[i]<'a' || d[i]>'z') ig=0;
              i++;
              }
          if (ig) {w++;
          
          if (((g[0]=='2' && g[1]=='0' && g[2]=='0' && g[3]=='0') || (g[0]=='1' && g[1]=='9' && g[2]>='0' && g[2]<='9' && g[3]>='0' && g[3]<='9')) && ((g[5]=='0' && g[6]>='1' && g[6]<='9') || (g[5]=='1' && g[6]>='0' && g[6]<='2'))  && ((g[8]=='0' && g[9]>='1' && g[9]<='9') || ((g[8]=='1' || g[8]=='2') && g[9]>='0' && g[9]<='9') || (g[8]=='3' && (g[9]=='0' || g[9]=='1')))) w++;
                          }
          cout<<w<<endl;
          
      
          }
          
    return 0;
}