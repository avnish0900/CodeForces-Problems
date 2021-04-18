#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long a[n];
    set<long long >s;
    for(long long i=0;i<n;i++){
      cin>>a[i];
    }
    for(long long i=0;i<n;i++){
      for(long long j=i+1;j<n;j++){
        if(a[j]-a[i]!=0){
          s.insert(abs(a[i]-a[j]));
        }
      }
    }
    cout<<s.size()<<endl;
  }
}
