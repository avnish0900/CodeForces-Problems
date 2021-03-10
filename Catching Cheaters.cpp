#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;cin>>x>>y;
  string a,b;cin>>a>>b;
  long long dp[x+1][y+1];
  memset(dp,0,sizeof(dp));
  long long ans=INT_MIN;
  for(long long i=1;i<=x;i++)
  {
    for(long long j=1;j<=y;j++)
    {
      if(a[i-1]==b[j-1])
      {
        dp[i][j]=max(dp[i][j],dp[i-1][j-1]+2);
      }
      else
      {
        dp[i][j]=max(dp[i][j],max(dp[i-1][j]-1,dp[i][j-1]-1));
      }
      ans=max(ans,dp[i][j]);
    }
  }
  cout<<ans<<endl;
  
  return 0;
}
