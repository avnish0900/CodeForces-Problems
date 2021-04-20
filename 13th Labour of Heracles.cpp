#include <bits/stdc++.h>
using namespace std;

int main() {
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long a[n];
long long ans=0;
for(long long i=0 ;i<n ;i++){
  cin>>a[i];
  ans+=a[i];
}
vector<long long >b(n,0);
for(long long i=0;i<n-1;i++){
  long long u,v;
  cin>>u>>v;
u--;
v--;
b[u]++;
b[v]++;
}
vector<long long>  vella;
for(long long i=0;i<n;i++){
  for(long long j=0;j<b[i]-1;j++){
    vella.push_back(a[i]);
  }
}

sort(vella.begin(),vella.end());
reverse(vella.begin(),vella.end());

cout<<ans<<" ";
for(long long i=0;i<vella.size();i++){
  cout<<ans+vella[i]<<" ";
  ans+=vella[i];
}
cout<<endl;
  }
}
