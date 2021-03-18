#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;cin>>t;
  while(t--){
    long long n,m;cin>>n>>m;
    set<long long >a;
    for(long long i=0;i<n;i++){
      long long x;cin>>x;
      a.insert(x);
    }
    for(long long i=0;i<m;i++){
      long long x;cin>>x;
      a.insert(x);
    }
    
    cout<<(n+m)-a.size()<<endl;

  }
  
  return 0;
}
