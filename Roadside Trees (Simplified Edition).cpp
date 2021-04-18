#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;cin>>n;
  vector<long long >a(n);
  for(auto &i:a){
    cin>>i;
  }
  long long jumps=n+n-1+a[0];
  for(long long i=0;i<n-1;i++){
    jumps+=abs(a[i]-a[i+1]);
  }
  cout<<jumps<<"\n";
}
