#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
  int a,b;
  int count=0;
  cin>>a>>b;
  for(int i=0;i<15;i++){
    if(a==arr[i] && b==arr[i+1]){
      count++;
      break;
    }
  }
  if(count==0){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
  return 0;
}
