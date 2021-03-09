#include<bits/stdc++.h>
using  namespace std;
int main(){
  long long t;cin>>t;
  while(t--){
    long long d,k;cin>>d>>k;
    string turn1="Ashish";
    string turn2="Utkarsh";
    long long turn1_move=0;
    long long turn2_move=0;
    long long turn=0,move=0;
    long long distance=0;
    while(distance<d*d){
      if(turn%2==0){
        turn1_move+=k;
      }
      else{
        turn2_move+=k;
      }
      distance=turn1_move*turn1_move + turn2_move*turn2_move;
      if(distance>d*d){
        break;
      }
      turn++;
      move++;
    }
    if(move%2==0){
      cout<<turn2<<endl;
    }
    else{
      cout<<turn1<<endl;
    }
  }
  return 0;
}
