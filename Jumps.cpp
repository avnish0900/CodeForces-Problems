#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;cin>>t;
  while(t--){    
   long long n;cin>>n;
  long long  c=0;
 long long  s=0;
 long long  i=1;
 while(s<n){
  s+=i;
  i++;
  c++;
 }
 cout<<(s!=n+1?c:c+1)<<endl;
  }
}
