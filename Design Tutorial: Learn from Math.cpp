#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;cin>>n;
  vector<long long> prime(1000010,0);
  prime[1]=1;
  for(long long i=2;i<=n;i++){
    if(prime[i]==0){
      for(long long j=2*i;j<=n;j+=i){
        prime[j]=1;
      }
    }
  }
  for(long long i=2;i<=n;i++){
    if(prime[i]==1 && prime[n-i]==1){
      cout<<i<<" "<<n-i<<endl;
      break;
    }
  }
}
