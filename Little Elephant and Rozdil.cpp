#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;cin>>n;
  long long arr,min=999999999999999999,minloc,count=0;
  for(int i=0;i<n;i++){
    cin>>arr;
    if(min>arr){
      min=arr;
      minloc=i;
      count=1;
    }
    else if(arr==min){
      count+=1;
    }
  }
  if(count==1){
    cout<<minloc+1;
  }
  else{
    cout<<"Still Rozdil";
  }
}
  
