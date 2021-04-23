#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;cin>>s;
  if(s[0]!='-'){ cout<<s<<"\n";}
  else{
    if(s.length()==3){
      if(s[1]>s[2]){
        if(s[2]!='0'){
          cout<<"-";
        }
        cout<<s[2]<<endl;
      }
      else{
        cout<<s[0];
        cout<<s[1];
        cout<<"\n";
      }
    }
    else{
      if(s[s.length()-2]<s[s.length()-1]){
        for(long long i=0;i<s.length()-1;i++){
          cout<<s[i];
        }cout<<endl;
      }
      else{
        for(long long i=0;i<s.length();i++){
          if(i==s.length()-2){continue;}
          cout<<s[i];
        }cout<<endl;
      }
    }
  }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
