#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,t;cin>>n>>t;
  string s;cin>>s;
  while(t--){
    for(long long i=0;i<n-1;i++){
      if(s[i]=='B' && s[i+1]=='G'){
        swap(s[i],s[i+1]);
        i++;
      }
    }
  }
  for(long long i=0;i<n;i++){
    cout<<s[i];
  }cout<<"\n";
}

int  main() {
  long long  t;//cin>>t;
  t=1;
  while(t--){
    solve();
  }
}
