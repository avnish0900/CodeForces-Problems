
#include<iostream>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long a[n],sum=0;
    for(long long i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    for(long long i=n;i>=1;i--){
      if(sum%i==0){
        long long need=sum/i;
        long long curr=0;
        long long flag=0;
        for(long long j=0;j<n;j++){
          curr+=a[j];
          if(curr>need){
            flag=1;
            break;
          }
          else if(curr==need){
            curr=0;
          }
        }
        if(flag==0){
          cout<<n-i<<endl;
          break;
        }
      }
    }
  }
}
