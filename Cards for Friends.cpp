#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  long long t;cin>>t;
  while(t--){
    long long w,h,n,b=0;cin>>w>>h>>n;
    long long check=0,sum=0;
    check=w*h;
    while((check%2)==0){
      check=check/2;
      sum=sum+1;
    }
    cout<<(pow(2,sum)>=n ? "YES\n": "NO\n");
  }
  return 0;
}
