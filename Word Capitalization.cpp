#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s[0]>=97 && s[0]<=122){
  char ch=s[0]-32;
  s[0]=ch;
  }
  for(int i=0;i<s.size();i++){
    cout<<s[i];
  }
  return 0;
}
