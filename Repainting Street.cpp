#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;cin>>t;
  while(t--){
    long long n,k;cin>>n>>k;
    long long a[n];
    for(long long i=0;i<n;i++){
      cin>>a[i];
    }
    long long ans=n,result,days=0;
    for(long long i=1;i<=100;i++){
      long long j=0;
      days=0;
      while(j<n){
        if(a[j]==i){
          j++;
        }
        else{
          days++;
          j+=k;
        }
      }
      ans=min(ans,days);
    }
    cout<<ans<<endl;
  }
}
