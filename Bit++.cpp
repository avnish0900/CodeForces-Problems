#include<iostream>
using namespace std;
 int main(){
   int n,result=0;string s;
   cin>>n;
   while(n--){
     cin>>s;
     if(s[1]=='+'){
       result+=1;
     }
     else if(s[1]=='-'){
       result-=1;
     }
   }
   cout<<result;
   return 0;
 }
