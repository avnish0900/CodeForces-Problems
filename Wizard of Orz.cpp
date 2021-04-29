#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    if(n==1){
      cout<<"9\n";
    }
    else if(n==2){
      cout<<98<<"\n";
    }
    else{
      cout<<"98";
      long long m=9;
      for(long long i=3;i<=n;i++){
        cout<<m;
        m=(m+1)%10;
      }
      cout<<"\n";
    }
  }
}

//   8 9 
