#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  
  while(true){
    n+=1;
    int d1=n/1000;
    int d2=n/100 %10;
    int d3=n/10%10;
    int d4=n%10;
    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4){
    break;  
  }
  }
  cout<<n;
  
  
  return 0;
}
