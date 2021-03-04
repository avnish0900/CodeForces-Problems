#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
   int x,y;
   cin>>x>>y;
   if(x==y){
     cout<<2*x<<"\n";
   }
   else {
     cout<<(x>y ? 2*x-1 : 2*y-1)<<'\n';
   }
}
int main()
{
   fast();
   int t=1;
   cin>>t;
   while(t--)
   {
      solve();
   }
  return 0;
}
