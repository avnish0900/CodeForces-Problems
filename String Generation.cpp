#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,k;cin>>n>>k;
    for(long long i=0;i<n;i++){
      if(i%3==0){
        cout<< "a";
      }
      else if(i%3==1){
        cout<<"b";
      }
      else{ cout<<"c";}
    }cout<<endl;
  }
}
