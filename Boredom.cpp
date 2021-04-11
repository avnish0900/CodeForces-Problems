#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,upto=0;cin>>n;
  vector<long long>a(100005,0),b(n);
  for(long long i=0;i<n;i++){cin>>b[i]; a[b[i]]++;upto=max(upto,b[i]);}
  vector<long long>dp(100005);
  dp[0]=0,dp[1]=a[1];
  for(long long i=2;i<=100005;i++){
    dp[i]=max((a[i]*i)+(dp[i-2]),dp[i-1]);
  }cout<<dp[upto]<<"\n";
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;//cin>>t;
  while(t--){solve();}
}
