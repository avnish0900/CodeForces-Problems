#include<iostream>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  int a,b,pairs=0;
  for(int i=0;i<=m+n;i++){
    for(int j=0;j<=m+n;j++){
      if(( i*i + j == n ) && ( i + j*j ==m)){
        pairs+=1;
      }
    }
  }
  cout<<pairs;
  return 0;
}
