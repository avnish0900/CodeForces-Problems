#include <iostream>
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
    int x;cin>>x;
    if(x==1){
      cout<<"0\n";
    }
    else if(x==2){
      cout<<"1\n";
    }else if(x==3){
      cout<<"2\n";
    }else{
      if(x%2==0){ cout<<"2\n";}
      else{ cout<<"3\n";}
    }
  }
}
