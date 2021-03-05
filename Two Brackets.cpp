#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    string s;
    cin>>s;
    long long c1=0,c2=0,sum=0;
    for(char c:s){
      if(c=='('){ 
        c1++;
      }
      if(c=='['){
        c2++;
      }
      if(c==')'){
        if(c1!=0){
          c1--;
          sum++;
        }
      }
      if(c==']'){
        if(c2!=0){
          c2--;
          sum++;
        }
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
