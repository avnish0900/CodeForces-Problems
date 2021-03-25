#include<iostream>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long a[n],b[n],c[n];
    for(long long i=0;i<n;i++){ cin>> a[i];}
    for(long long i=0;i<n;i++){ cin>> b[i];}
    for(long long i=0;i<n;i++){ cin>> c[i];}
    long long ans[n],j=0;
    for(long long i=0;i<n;i++){
      ans[i]=0;
    }
    ans[0]=a[0];
    for(long long i=1;i<n-1;i++){
      if(a[i]!=ans[i-1]){
        ans[i]=a[i];
      }
      if(b[i]!=ans[i-1]){
        ans[i]=b[i];
      }
      if(c[i]!=ans[i-1]){
        ans[i]=c[i];
      }
    }
    if(a[n-1] !=ans[n-2] && a[n-1]!=ans[0]){
      ans[n-1]=a[n-1];
    }
    if(b[n-1] !=ans[n-2] && b[n-1]!=ans[0]){
      ans[n-1]=b[n-1];
    }
    if(c[n-1] !=ans[n-2] && c[n-1]!=ans[0]){
      ans[n-1]=c[n-1];
    }
    for(long long i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }cout<<endl;
  }
}
