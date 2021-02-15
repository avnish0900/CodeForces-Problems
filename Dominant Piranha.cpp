#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;cin>>t;
  int max=0,count=0,position=0;
  for(int i=0;i<t;i++){
    int n;cin>>n;
    int arr[n];
    int m=0,mc=1,leastpos=1;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]>m){
        m=arr[i];
        mc=1;
      }
      else if(arr[i]==m){
        mc++;
      }
      else{
        leastpos=i+1;
      }
    }
    if(mc==n){
      cout<<-1<<endl;
      continue;
    }
    int f=0;
    for(int i=leastpos;i<n;i++){
      if(arr[i]==m){
        cout<<i+1<<endl;
        f=1;
        break;
      }
    }
    if(f==0){
      for(int i=leastpos;i>=0;i--){
        if(arr[i]==m){
          cout<<i+1<<endl;
          break;
        }
      }
    }
  }  
  return 0;
}
