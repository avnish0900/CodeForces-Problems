#include<bits/stdc++.h>
using namespace std;
int main(){
  string number;
  cin>>number;
  for(int i=0;i<number.length();){
    if(number[i]=='1' && number[i+1]=='4' && number[i+2]=='4'){
      i+=3;
    }
    else if(number[i]=='1' && number[i+1]=='4'){
      i+=2;
    }
    else if(number[i]=='1'){
      i+=1;
    }
    else{
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
