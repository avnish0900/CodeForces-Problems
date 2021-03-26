#include<iostream>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long x;cin>>x;
    long long flag=0;
      for(long long i=1;i<=n;i++){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b==c){
          flag=1;
        }
      }
      if(flag==0 || x&1){
        cout<<"NO\n";
      }
      else{
        cout<<"YES\n";
      }
  }
}
