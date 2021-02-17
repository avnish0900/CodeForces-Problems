#include <bits/stdc++.h>
using namespace std;
long long factorial(long long n){
  return(n==1 || n==0 ? 1 : n*factorial(n-1)) ;
}
int main(){
  long long n;
  cin>>n;
  long long half=n/2;
  long long fact=factorial(n-1)/half;
  cout<<fact<<endl;
  return 0;
}
