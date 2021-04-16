#include<bits/stdc++.h>
using namespace std;
int  main(){
  string s;cin>>s;
  long long  k;cin>>k;
  long long  ar[27];
  long long  maxx=0;
  for(long long  i=0;i<26;i++){
    cin>>ar[i];
    maxx=max(maxx,ar[i]);
  }
  long long  ans=0;
  for(long long  i=0;i<s.length();i++){
    ans+=(i+1)*(ar[s[i]-'a']);
  }
  long long  val=s.length()+1;
  while(k--){
    ans+=val*maxx;
    val++;
  }
  cout<<ans<<"\n";
}
