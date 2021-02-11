#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string team[n];
  for(int i=0;i<n;i++){
    cin>>team[i];
  }  string team1=team[0],team2;
  int team1goals=0,team2goals=0;

  for(int i=0;i<n;i++){
    if(team1!=team[i]){
      team2=team[i];
      team2goals+=1;
    }
    else{
      team1goals+=1;
    }
  }
 if(team1goals>team2goals){
   cout<<team1;
 }
 else{
   cout<<team2;
 }
  
  return 0;
}                                                                                    
