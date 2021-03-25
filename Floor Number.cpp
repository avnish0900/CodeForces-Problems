#include<iostream>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long x;cin>>x;
      for(long long i=1;true;i++){
        if(i==1){
          n-=2;
        }
        if(n<=0){
          cout<<i<<endl;
          break;
        }
        n-=x;
      }

  }
}
