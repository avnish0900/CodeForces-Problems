#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.size();
  for(int i=0;i<n;){
    if(s[i]=='.'){
      cout<<"0";
      i=i+1;
    }
    else if(s[i]=='-' && s[i+1]=='.'){
      cout<<"1";
      i=i+2;
    }
    else{
      cout<<"2";
      i=i+2;
    }
  }
  return 0;
}
