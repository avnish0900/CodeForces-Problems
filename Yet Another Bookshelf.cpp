#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;cin>>t;
  for(int i=0;i<t;i++){
    int n;cin>>n;
    int arr[n];
    int first=0,last=0;
    for(int j=0;j<n;j++){
      cin>>arr[j];
      if(arr[j]==1){
        if(first==0){
          first=j+1;
        }
        else{
          last=j+1;
        }
      }
    }int sum=0;
    for(int k=first;k<last;k++){
      if(arr[k]==0){
        sum+=1;
      }
    }
    cout<<sum<<endl;
  }
  
  return 0;
}
