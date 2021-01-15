#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=5;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int count1=0,count2=0,total=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]!=0){
        count1=abs(2-i);
        count2=abs(2-j);
        total=count1+count2;
      }
    }
  }
  cout<<total<<endl;
  return 0;
}
