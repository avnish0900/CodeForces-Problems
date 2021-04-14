#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;cin>>s;
  long long flag=0;
  long long last_indx=0;
  for(int i=0;i<s.length();i++){
    if((s[i])%2==0){
      flag=1 ;
      if((s[i])<(s[s.length()-1])){
      swap(s[i],s[s.length()-1]);
      cout<<s<<"\n";
      return;
    }
    last_indx=i;
   }
  }
  if(flag==0){
    cout<<"-1\n";
  }
  else{
    swap (s[last_indx],s[s.length()-1]);
    cout<<s<<"\n";
  }
}

int  main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long  t;t=1;//cin>>t;
  while(t--){solve();}
}
