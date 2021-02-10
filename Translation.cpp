#include<bits/stdc++.h>
using namespace std;
int main(){
  string original,reverse;
  cin>>original>>reverse;
  if(original.length()!=reverse.length()){
    cout<<"NO";
    return 0;
  }
  else{
    for(int i=0;i<original.length();i++){
      if(original[i]!=reverse[original.length()-i-1]){
        cout<<"NO";
        return 0;
      }
    }
  }
  cout<<"YES";
  return 0;
}                                                                                    
