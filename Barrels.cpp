#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long x,k;
    cin>>x>>k;
    long long a[x];
    for(long long i=0;i<x;i++){
      cin>>a[i];
    }
    sort(a,a+x);
    reverse(a,a+x);
    long long sum=0;
    for(long long i=0;i<=k;i++){
      sum+=a[i];
    }  
    cout<<sum<<endl;
  } 
  return 0;
}


