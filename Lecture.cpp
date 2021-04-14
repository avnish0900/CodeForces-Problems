#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,m;cin>>n>>m;
  map<string,string>word;
  for(long long i=0;i<m;i++){
    string a,b;cin>>a>>b;
    word[a]=(a.length()<=b.length() ? a:b);
    word[b]=(a.length()<=b.length() ? a:b);
  }
  for(long long i=0;i<n;i++){
    string notes;cin>>notes;
    cout<<word[notes]<<" ";
  }cout<<endl;
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;//cin>>t;
  while(t--){solve();}
}
