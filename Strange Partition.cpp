#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  long long t;cin>>t;
  while(t--){
    long long n,x;
    cin>>n>>x;
    vector<long long >a(n);
    long long flag=0,sum=0;
    for(long long i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    long long ss=0;
    for(long long i=0;i<n;i++){
      if(a[i]%x==0){
        ss+=(a[i]/x);
      }
      else{
        ss+=((a[i]/x) +1);
      }
    }
    long long s=0;
    if(sum%x!=0){
      s+=((sum/x)+1);
    }
    else{
      s=(sum/x);
    }
    cout<<s<<" "<<ss<<"\n";
  }
}
