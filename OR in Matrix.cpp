#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long row,col;cin>>row>>col;
  long long a[row][col],b[row][col],c[row][col];
  for(long long i=0;i<row;i++){
    for(long long j=0;j<col;j++){cin>>b[i][j];a[i][j]=1;c[i][j]=0;}
  }
  for(long long i=0;i<row;i++){
    for(long long j=0;j<col;j++){
      if(b[i][j]==0){
        for(long long k=0;k<row;k++){
          a[k][j]=0;
        }
        for(long long k=0;k<col;k++){
          a[i][k]=0;
        }
      }
    }
  }
  for(long long i=0;i<row;i++){
    for(long long j=0;j<col;j++){
      for(long long k=0;k<row;k++){
        c[i][j]=max(c[i][j],a[k][j]);
      }
      for(long long k=0;k<col;k++){
        c[i][j]=max(c[i][j],a[i][k]);
      }
      if(c[i][j]!=b[i][j]){
        cout<<"NO\n";
        return;
      }
    }
  }
  cout<<"YES\n";
  for(long long i=0;i<row;i++){
    for(long long j=0;j<col;j++){
      cout<<a[i][j]<<' ';
    }cout<<endl;
  }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long long t=1;
	//cin>>t;
	while(t--) {solve();}
}
