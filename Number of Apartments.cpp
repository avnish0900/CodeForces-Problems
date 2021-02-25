#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    if(x==1 || x==2 || x==4){
      cout<<-1<<endl;
    }
    else if(x%3==0){
      cout<<x/3<<" 0 0"<<endl;
    }
    else if(x%5==0){
        cout<<"0 "<<x/5<<" 0\n";
    }
    else if(x%7==0){
          cout<<"0 0 "<<x/7<<endl;
    }
  else{
    if(x%3==1){
      cout<<(x-7)/3<<" 0 1\n";
    }
    else{
      cout<<(x-5)/3<<" 1 0\n";
    }
  }
  } 
  return 0;
}
