#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b,c;
  cin>>a>>b>>c;
  a=a+b;
  sort(a.begin(),a.end()); 
  sort(c.begin(),c.end());
  for(int i=0;i<c.length();i++){
    if(c.length()<a.length()){
      cout<<"NO";
      return 0;
    }  
    if(a[i]!=c[i]){
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
