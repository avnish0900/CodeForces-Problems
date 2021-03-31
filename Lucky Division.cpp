#include <iostream>
using namespace std;
int main() {
  string s;
  cin>>s;
  long long arr[14]={4,7,47,44,74,77,444,447,474,477,777,747,774,744};
  long long x=stoi(s),flag=0;
  for(long long i=0;i<s.length();i++){
    if(s[i]!='4' && s[i]!='7' ){
      flag=1;
      break;
    }
  }
  for(long long i=0;i<14;i++){
    if(x%arr[i]==0){flag=0;}
  }
  if(flag==0){ cout<<"YES\n";}
  else{ cout<<"NO\n";}
}
