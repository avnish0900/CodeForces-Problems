#include<bits/stdc++.h>
using namespace std;

int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    vector<long long >a(n+1,0);
    for(long long i=0;i<n;i++){
      long long x;cin>>x;
      a[x]++;
    }
    long long maxx=0;
    for(long long i=0;i<a.size();i++){
      maxx=max(maxx,a[i]);
    }
    cout<<maxx<<endl;
  }
}
