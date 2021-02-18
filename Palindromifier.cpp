#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
  for(int i=0;i<s.length()/2;i++){
    if(s[i]!=s[s.length()-i-1]){
      return false;
    }
  }
  return true;
}


int main() {
  string s;cin>>s;
  if(palindrome(s)){
    cout<<0<<"\n";
    return 0;
  }
  else{
    cout<<3<<endl;
    cout<<"R "<<s.length()-1<<endl;
    cout<<"L "<<s.length()<<endl;
    cout<<"L "<<2<<endl;
  }
  return 0;
}
