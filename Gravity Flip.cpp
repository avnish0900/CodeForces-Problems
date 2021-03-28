#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;cin>>n;
  long long a[n];
  for(long long i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  //long long ans=INT_MAX,dif=0;
  for(long long i=0;i<n;i++){
     //dif=abs(a[i]-a[i+n-1]);
     cout<<a[i]<<" ";
     //ans=min(ans,dif);
  }cout<<endl;
  //cout<<ans<<endl;
}
