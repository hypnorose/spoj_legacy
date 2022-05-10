#include<cstdio>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   char text[31];
   scanf("%d",&n);
   vector< vector<string> > tab(30);
   while(n--)
   {
      scanf("%s",text);
      string str_text(text);
      tab[str_text.length()-1].push_back(text);
   }
   for(int i=0; i<30; i++)
      sort(tab[i].begin(),tab[i].end());
   scanf("%d",&n);
   while(n--)
   {
      scanf("%s",text);
      string str_text(text);
      int ans = 0;
      int len = str_text.length()-1;
      for(int i = 0; i < len; i++)
         ans += tab[i].size();
      vector<string>::iterator pos = lower_bound(tab[len].begin(), tab[len].end(), str_text);
      ans += distance(tab[len].begin(), pos);
      printf("%d\n", ans);
   }
}