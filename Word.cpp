#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.size(),countl=0,countu=0;
  for(int i=0;i<n;i++){
    if(s[i]>=65 && s[i]<=90){
      countu++;
    }
    else{
      countl++;
    }
  }
  if(countu==countl){
    transform(s.begin(),s.end(),s.begin(),::tolower);
  }
  else if(countu>countl){
    transform(s.begin(),s.end(),s.begin(),::toupper);
  }
  else{
    transform(s.begin(),s.end(),s.begin(),::tolower);
  }
  cout<<s;
  return 0;
}
