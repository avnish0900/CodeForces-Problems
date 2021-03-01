#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;cin>>t;
  while(t--){
    long long n,x;cin>>n;
    map<int, int>mp;
    for(long long i=0;i<n;i++){
      cin>>x;
      mp[x]++;
    }
    
    if(mp.size()!=n){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}
