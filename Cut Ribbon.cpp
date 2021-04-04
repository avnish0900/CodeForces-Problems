#include <bits/stdc++.h>
using namespace std;
unordered_map<long long ,long long>dp;
long long best(long long n,long long a,long long b,long long c){
  if(n==0){ return 0;}
  if(n<0){ return INT_MIN;}
  if(dp.count(n)){ return dp[n];}
  return dp[n]=1+max(best(n-a,a,b,c),max(best(n-b,a,b,c),best(n-c,a,b,c)));
}
int main(){
  long long n,a,b,c;cin>>n>>a>>b>>c;
  cout<<best(n,a,b,c)<<endl;
}
