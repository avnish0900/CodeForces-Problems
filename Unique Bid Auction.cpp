#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==1){
      int x;
      cin>>x;
      cout<<1<<endl;
    }else{
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
      int x;cin>>x;
      a[i]=x;
      b[i]=x;
    }
    sort(b,b+n);
    int flag=0;
    vector<int> c;int j=0;
    for(int i=0;i<n-1;i++){
      if(b[i] !=b[i+1]){
        if(b[i]!=b[i-1]){
        c.push_back(b[i]);}
      }
    }
    int repeat=0;
      if(b[n-2]==b[n-1]){
        repeat=1;
      }
    
    if(repeat!=1){
      c.push_back(b[n-1]);
    }
    if(c.size()==0){
    cout<<-1<<endl;}
    else{
      for(int i=0;i<n;i++){
        if(a[i]==c[0]){   
          cout<<i+1<<endl;
        }
      }
    }
  }}
}
