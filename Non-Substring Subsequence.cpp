#include <iostream>
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
    int n,q;cin>>n>>q;
    string s;cin>>s;
    for(int i=0;i<q;i++){
      int l,r;cin>>l>>r;
      int flag=0;
      for(int i=l-2;i>=0;i--){
        if(s[i]==s[l-1]){
          flag=1;
          break;
        }
      }
      for(int i=r;i<n;i++){
        if(s[i]==s[r-1]){
          flag=1;
        }
      }
      if(flag==1) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
}
