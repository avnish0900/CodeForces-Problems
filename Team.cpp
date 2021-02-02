#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,solved=0;
  cin>>n;
  while(n--){
    cin>>a>>b>>c;
    if((a==1 && b==1) && c==1){
      solved++;
    }
    else if((a==1 && b==1) && c!=1){
      solved++;
    }
    else if((a==1 && c==1) && b!=1){
      solved++;
    }
    else if((b==1 && c==1) && a!=1){
      solved++;
    }
  }
  cout<<solved;
  return 0;
}
