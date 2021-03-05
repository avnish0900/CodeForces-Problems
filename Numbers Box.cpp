#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,m;cin>>n>>m;
    long long sum=0,cnt=0,mi=INT_MAX;
    for(long long i=0;i<n;i++){
      for(long long j=0;j<m;j++){
        long long x;
        cin>>x;
        mi=min(mi,abs(x));
        if(x<0){
          cnt++;
        }
        sum+=abs(x);
      }
    }  
      if(cnt%2==0){
        cout<<sum<<endl;
      }
      else{
        cout<<abs(sum-(2*mi))<<endl;;
      }
    
  }
  return 0;
}
