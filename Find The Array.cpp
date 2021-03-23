#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;cin>>t;
  while(t--){
   long long n;cin>>n;
   vector<long long >a(n);;
   for(long long i=0;i<n;i++){
     cin>>a[i];
   } 
   long long odd=0,even=0;
   for(long long i=0;i<n;i++){
    if(i&1)
      odd+=a[i];
    else
      even+=a[i];
   }
   if(odd>even){
     for(long long i=0;i<n;i++){
       if(i&1){
         cout<<a[i]<<" ";
       }
       else{
         cout<<1<<" ";
       }
     }cout<<endl;
   }
   else{
     for(long long i=0;i<n;i++){
       if(i&1){
         cout<<1<<" ";
       }
       else{
         cout<<a[i]<<" ";
       }
     }cout<<endl;
   }
  }
}
