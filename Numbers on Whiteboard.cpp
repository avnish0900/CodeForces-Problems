#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    cout<<2<<endl;
    long long a=n,b=n-1;
    for(int i=0;i<n-1;i++){
      cout<<a<<" "<<b<<endl;
      a=ceil((a+b+1)/2);b--;
    }
  } 
  return 0;
}


