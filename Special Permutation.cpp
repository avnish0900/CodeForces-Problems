#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
    int x;
    cin>>x;
    for(int i=x;i>=1;i--){
      if(i==ceil(x/2.0)){
        continue;
      }
      cout<<i<<" ";
    }cout<<ceil(x/2.)<<endl;
  }
}
