#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n;cin>>n;
    long long a[n],sum=0;
    for(long long i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    sort(a,a+n);
if(sum==0){ cout<<"NO\n";}
else if(sum>0){ cout<<"YES\n";
  for(long long i=n-1;i>=0;--i){
  cout<<a[i]<<" ";
}cout<<endl;
}
else {cout<<"YES\n";
for(auto i:a){
  cout<<i<<" ";
}cout<<endl;
}

  }
}
