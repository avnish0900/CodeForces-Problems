#include <bits/stdc++.h>
using namespace std;
int main() {
  string s,r;
  cin>>s;
  for(int a=0;a<s.length();a+=1){
    if(
      (s[a]=='A' || s[a]=='a') || 
      (s[a]=='Y' || s[a]=='y') || 
      (s[a]=='O' || s[a]=='o') ||
      (s[a]=='E' || s[a]== 'e')||
      (s[a]=='I' || s[a]=='i')||
      (s[a]=='U'||s[a]== 'u') 
        ){
      continue;
    }else{
     cout<<"."<<char(tolower(s[a]));
    }
  } 
  return 0;
}
