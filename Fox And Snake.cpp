#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,m;cin>>n>>m;
  long long start=m;
  char a[n+4][m+4];
  for(long long i=1;i<=n;i++){
    for(long long j=1;j<=m;j++){
      a[i][j]='.';
    }
  }
  for(long long i=1;i<=n;i++){
    for(long long j=1;j<=m;j++){
      if(i&1){
        a[i][j]='#';
      }
      if(i%4==0){
        a[i][1]='#';
      }
      long long check=(i/2);
      if(check%2!=0){
        a[i][m]='#';
      }
    }
  }

  for(long long i=1;i<=n;i++){
    for(long long j=1;j<=m;j++){
      cout<<a[i][j];
    }
    cout<<endl;
  }
}
