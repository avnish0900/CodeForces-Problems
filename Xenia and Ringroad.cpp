#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,m;cin>>n>>m;
  long long a[m];
  for(long long i=0;i<m;i++){
    cin>>a[i];
  }
  long long present=1,time=0;
  for(long long i=0;i<m;i++){
    if(a[i]>=present){ 
      time+=abs(present-a[i]);
      //cout<<time<<" ";
      present=a[i];
    }
    else{
      time+=(n-present+1)+abs(1-a[i]);
      present=a[i]; 
      //cout<<time<<" ";
    }
  }
  cout<<time<<endl;
}
