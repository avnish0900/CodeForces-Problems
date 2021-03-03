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
   int n,k;
   cin>>n>>k;
   string s,t;
   cin>>s>>t;
   vector<int> freq(26);
   for(char c:s)freq[c-'a']++;
   for(char c:t)freq[c-'a']--;
   for(int i=0;i<26;i++)
   {
      if(freq[i]<0 || freq[i]%k!=0)
      {
         cout<<"No"<<endl;
         return;
      }
      freq[i+1]+=freq[i];
   }
   cout<<"Yes"<<endl;
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
