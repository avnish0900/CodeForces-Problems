#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>map;
    int m=0;
    int second=-1;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      map[arr[i]]++;
      m=max(m,map[arr[i]]);
    }
    if(n==m){
      cout<<"NO\n";
      continue;
    }
    cout<<"YES\n";
    for(int i=1;i<n;i++){
      if(arr[0]!=arr[i]){
        second=i;
        break;
      }
    }
    for(int i=1;i<n;i++){
      if(arr[i]!=arr[0]){
        cout<<1<<" "<<i+1<<endl;
      }
      else{
        cout<<second+1<<" "<<i+1<<endl;
      }
    }
  }
  return 0;
}
