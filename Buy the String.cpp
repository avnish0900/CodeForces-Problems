#include <iostream>
using namespace std;
int main() {

  long t;cin>>t;
  while(t--){
    long long n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string s;cin>>s;
    long long count0=0,count1=0;
    for(long long i=0;i<n;i++){
      if(s[i]=='1'){
        count1++;
      }
      else{
        count0++;
      }
    }
    long long change=0;
    if(c0>c1){
      for(long long i=0;i<n;i++){
        if(s[i]=='0'){
          change+=h;
        }
      }

      cout<<min(change+(c1*n),(c0*count0+c1*count1))<<endl;
    }
    else if(c0<c1){
      change=0;
      for(long long i=0;i<n;i++){
        if(s[i]=='1'){
          change+=h;
        }
      }
      cout<<min(change+(c0*n),(c0*count0+c1*count1))<<endl;
    }
    else {
      cout<<c0*n<<endl;
    }
  }
}
