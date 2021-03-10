#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,k;cin>>n>>k;long long a[n*k];
    for(long long i=0;i<n*k;i++){
      cin>>a[i];
    }
    long long sum=0;
    if(n%2==0){
      long long skip=floor(n/2.0);
      //cout<<skip<<endl;
      long long idx=n*k-1;
      for(long long i=0;i<k;i++){
        idx-=skip;
       // cout<<a[idx]<<endl;
        sum+=a[idx];
        idx-=1;
       // cout<<a[idx]<<endl;
      }
    }
    else{
      long long skip=floor(n/2.0);
      //cout<<skip<<endl;
      long long idx=n*k-1;
      for(long long i=0;i<k;i++){
        idx-=skip;
        //cout<<a[idx]<<endl;
        sum+=a[idx];
        idx-=1;
        //cout<<a[idx]<<endl;
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
