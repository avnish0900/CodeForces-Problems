#include <bits/stdc++.h>
#define fast cin.tie(0); cout.tie(0); std::ios_base::sync_with_stdio(0);
using namespace std;
int main() {
  fast 
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long  a[n],b[n],ans=0,result[n];
    for(long long i=0;i<n;i++){ cin>>a[i];}
    for(long long i=0;i<n;i++){ cin>>b[i]; ans+=b[i]; }
    vector<pair<long long,long long >>v;
    for(long long i=0;i<n;i++){
      v.push_back(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    long long suffix_sum=0;
    for(long long i=n-1;i>=0;i--){
      suffix_sum+=v[i].second;
      result[i]=suffix_sum;
    }
    /*for(auto i: result){
      cout<<i<<" ";
    }cout<<endl;*/
    for(long long i=0;i<n;i++){
      long long temp=v[i].first,x=0,y;
      if(i!=n-1){
        /*for(long long j=i+1;j<n;j++){
          x+=v[j].second;
        }*/
        y=max(result[i+1],temp);
        //cout<<result[i+1]<<endl; 
        ans=min(ans,y);
      }
      else{
        y=temp;
        ans=min(ans,y);
      }
    }
    cout<<ans<<endl;
  }
}
