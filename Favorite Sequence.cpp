
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
      cin>>a[i];
    }
    for(long long i=0;i<n;i++){
      long long j=n-1-i;
      if(i>j){
        break;
      }
      if(i==j){
        cout<<a[i]<<" ";
      }else{
      cout<<a[i]<<" "<<a[j]<<" ";}
    }cout<<endl;
  }
}
