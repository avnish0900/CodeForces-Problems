#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,r;
  cin>>s;
  int size=s.length();  
  for(int i=0;i<size;i=i+2){
    for(int j=0;j<size-i-2;j=j+2){
      if(s[j]>s[j+2]){
        int temp=s[j];
        s[j]=s[j+2];
        s[j+2]=temp;
      }
    }
  }

  cout<<s;
  return 0;
}
