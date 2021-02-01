#include <iostream>
using namespace std;
int main() {
  string s;cin>>s;
  long long flag=0;
  for(long long i=0;i<s.length();i++){
    if(s[i]=='H'|| s[i]=='Q' || s[i]=='9'){
      cout<<"YES\n";
      flag=1;
      break;
    }
  } if(flag==0){cout<<"NO\n";}
}
