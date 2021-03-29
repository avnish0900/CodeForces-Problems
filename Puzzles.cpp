#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n,m;cin>>n>>m;
  long long a[m];
  for(long long i=0;i<m;i++){
    cin>>a[i];
  }
  sort(a,a+m);
  long long ans=INT_MAX,dif=0;
  for(long long i=0;i+n-1<m;i++){
     dif=abs(a[i]-a[i+n-1]);
     //cout<<dif<<" ";
     ans=min(ans,dif);
  }
  cout<<ans<<endl;
}
