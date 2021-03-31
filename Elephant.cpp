#include <iostream>
using namespace std;
int main() {
  long long x;
  cin>>x;
  long long ans=0;
  while(x>=5){
    x-=5;
    ans+=1;
  }
  while(x>=4){
    x-=5;
    ans+=1;
  }
  while(x>=3){
    x-=5;
    ans+=1;
  }
  while(x>=2){
    x-=5;
    ans+=1;
  }
  while(x>=1){
    x-=5;
    ans+=1;
  }cout<<ans<<endl;
}
