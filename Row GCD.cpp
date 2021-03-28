#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n,m;cin>>n>>m;
  long long a[n];
  for(long long i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  
  long long g=0;
  for(long long i=0;i<n;i++){
    g=__gcd(g,a[i]-a[0]);
  }
  for(long long i=0;i<m;i++){
    long long x;cin>>x;
    cout<<__gcd(g,a[0]+x)<<" ";
  }cout<<endl;
}
