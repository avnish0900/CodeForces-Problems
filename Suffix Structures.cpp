#include "bits/stdc++.h"
using namespace std;
void solve(){
  string s,t;cin>>s>>t;
  vector<long long >frequency_in_s(26,0),frequency_in_t(26,0);
  for(long long i=0;i<s.length();i++){
    frequency_in_s[s[i]-'a']++;
  }
  for(long long i=0;i<t.length();i++){
    frequency_in_t[t[i]-'a']++;
  }
  for(long long i=0;i<26;i++){
    frequency_in_s[char('a'+i)]+=0;
  }  long long pos=0,flag=true;
  for(long long i=0;i<26;i++){
    if(frequency_in_t[i] >frequency_in_s[i]){
      cout<<"need tree\n";
      return ;
    }
    else if(frequency_in_s[i]>frequency_in_t[i])
    {
      flag=false;
    }
  }
  for(long long i=0;i<s.length();i++){
    if(s[i]==t[pos]){
      pos++;
    }
    if(pos==t.length()){
      break;
    }
  }long long f2=true;
  if(pos!=t.length()){
    f2=false;
  }
  if(pos!=t.length())
    {
        f2=false;
    }
    if(!f2 and !flag)
    {
        cout<<"both\n";
    }
    else if(!f2)
    {
        cout<<"array\n";
    }
    else
    {
        cout<<"automaton\n";
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
