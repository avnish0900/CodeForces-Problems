#include<bits/stdc++.h>
using namespace std;
vector<long long >c;
void printDivisors(int n) 
{ 
  c.clear();
    // Note that this loop runs till square root 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
            c.push_back(i);
                //printf("%d ", i); 
  
            else // Otherwise print both 
            c.push_back(i);
            c.push_back(n/i);
                //printf("%d %d ", i, n/i); 
        } 
    } 
} 


int main(){
  long long t;cin>>t;
  while(t--){
    long long d;cin>>d;
    long long  result=0,a=d+1,flag=0;
    while(true){
      flag=0;
      for(long long i=2;i*i<=a;i++){
        if(a%i!=0){
          continue;
        }
        if(a%i==0) {
          flag=1;   
          break;
        }
      }
      if(flag==0) break;
      else a++;
    }
    long long  b=a+d;
    while(true){
      flag=0;
      for(long long i=2;i*i<=b;i++){
        if(b%i!=0){
          continue;
        }
        if(b%i==0){
          flag=1;   
          break;
        }
      }
      if(flag==0) break;

      b++;
    }
    cout<<a*b<<"\n";
  }
}
