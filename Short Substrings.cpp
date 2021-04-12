#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;cin>>s;
  vector<char>a;
  a.push_back(s[0]);
  a.push_back(s[1]);
  for(long long i=3;i<s.length();i+=2){
    a.push_back(s[i]);
  }
  for(auto i: a){
    cout<<i;
  }cout<<"\n";
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;cin>>t;
  while(t--){solve();}
}
