#include<bits/stdc++.h>
using namespace std;

int main(){
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    string b;cin>>b;
    string a="";
    //vector<long long >c;
    long long pre=0;
    for(long long i=0;i<n;i++){
      if(b[i]=='1'){
        if(pre==1){
          a+="1";
          pre=2;
         // c.push_back(1);
          continue;
        }
        if(pre==2){
          a+="0";
          //c.push_back(0);
          pre=1;
          continue;
        }
        if(pre==0){
          a+="1";
          pre=2;
          //c.push_back(1);
          continue;
        }
      }
      else{
        if(pre==1){
          a+="0";
          pre=0;
         // c.push_back(0);
          continue;
        }
        else{
          a+="1";
         // c.push_back(1);
          pre=1;
          continue;
        }
       // pre=a[i]+b[i];
      }
      //pre=a[i]+b[i];
    }
    cout<<a<<"\n";
  }
}
