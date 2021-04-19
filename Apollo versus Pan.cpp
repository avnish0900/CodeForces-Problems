#include <bits/stdc++.h>
using namespace std;
const long long modd=1e9+7;
long long cntt[70];
long long a[500007];
int main() {
  long long t;cin>>t;
  while(t--){
    memset(cntt,0,sizeof(cntt));
    long long n;cin>>n;
    for(long long i=1;i<=n;i++){
      scanf("%lld",&a[i]);
      for(long long j=0;j<=60;j++){
        if((1ll<<j)&a[i])cntt[j]++;
      }
    }
    long long ss=0;
    for(long long i=1;i<=n;i++){
      long long p=0,q=0;
      for(long long j=0;j<=60;j++){
        long long x=(1ll<<j)%modd;
        if((1ll<<j)&a[i]){
          p=(p+x*n)%modd;
          q=(q+x*cntt[j])%modd;
        }
        else {
          p=(p+x*cntt[j])%modd;
        }
      }
      ss=(ss+p*q)%modd;
    }
    
    
    
cout<<ss<<"\n";
  }
}
