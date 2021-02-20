#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i==j){
          arr[i][j]=1;
        }
        else{
          arr[i][j]=0;
        }
      }
      for(int i=0;i<n;++i){
        arr[i][n-i-1]=1;
      }
      if(n%2!=0){
        int mid=n/2;
        arr[mid][mid-1]=1;
        arr[mid-1][mid]=1;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;

}
