#include<iostream>
using namespace std;
int main(){
  int friends,total=0;
  cin>>friends;
  int finger;
  for(int i=0;i<friends;i++){
    cin>>finger;
    total+=finger;
  }
  int ways=0;
  for(int i=1;i<=5;i++){
    if((total+i)%(friends+1)!=1){
      ways+=1;
    }
  }
  cout<<ways;
  return 0;
}
