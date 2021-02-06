#include<bits/stdc++.h>
using namespace std;
#define mod 1000000000+7
int main(){
  long long x,y,n;cin>>x>>y>>n;
  long long ans;
  n%=6;
  if(n==0){
    ans=(x-y+mod+mod);
    ans%=mod;
  }
  else if(n==1){
    ans=(x+mod);
    ans%=mod;
  }
  else if(n==2){
    ans=(y+mod);
    ans%=mod;
  }
  else if(n==3){
    ans=(y-x+mod+mod);
    ans%=mod;
  }
  else if(n==4){
    ans=(-x+mod);
    ans%=mod;
  }
  else{
    ans=(-y+mod);
    ans%=mod;
  }
  cout<<ans<<"\n";
}
