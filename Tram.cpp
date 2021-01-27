#include <bits/stdc++.h>
using namespace std;

int main() {
  int enter=0,exit=0,capacity=0,limit=0,stops=0;
  cin>>stops;
  for(int i=1;i<=stops;i++){
    cin>>exit;
    capacity-=exit;
    cin>>enter;
    capacity+=enter;
    if(capacity>limit){
      limit=capacity;
    }
  }
  cout<<limit;
}
