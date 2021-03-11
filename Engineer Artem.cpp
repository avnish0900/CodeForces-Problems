#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,m;cin>>n>>m;
    long long a[n][m];
    for(long long i=0;i<n;i++){
      for(long long j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    long long p=0;
    for(long long i=0;i<n;i++){
    long long q=p;
      for(long long j=0;j<m;j++){
        if(a[i][j]%2!=q){
          a[i][j]++;
        }
        if(q==0){
          q=1;
        }
        else{
          q=0;
        }
      }
      if(p==0){
        p=1;
      }
      else{
        p=0;
      }
    }
    for(long long i=0;i<n;i++){
      for(long long j=0;j<m;j++){
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
