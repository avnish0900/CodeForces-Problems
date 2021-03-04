#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n,ele,sum=0;cin>>n;
    vector<long long> v;
    for(long long i=0;i<n;i++){
      cin>>ele;
      v.push_back(ele);
      sum+=ele;
    }
    long long x=ceil((sum*1.0)/(n-1));
    long long y=x*(n-1);
    sort(v.begin(),v.end());
    if(v[n-1]>x){
      y=v[n-1]*(n-1);
    }
    cout<<abs(y-sum)<<endl;
  }
  return 0;
}
