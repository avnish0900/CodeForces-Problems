#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    int size=sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    reverse(b,b+size);
    int flag=0;
    for(int i=0;i<n;i++){
      if(a[i]+b[i] > x){
        cout<<"NO\n";
        flag=1;
        break;
      }
    }if(flag==0){
    cout<<"YES\n";}
  }
  return 0;
}
