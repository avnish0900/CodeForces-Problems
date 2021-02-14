#include <bits/stdc++.h>
using namespace std;
int main() {

  int t;cin>>t;
  int arr1[]={1,11,111,1111};
  int arr2[]={2,22,222,2222};
  int arr3[]={3,33,333,3333};
  int arr4[]={4,44,444,4444};
  int arr5[]={5,55,555,5555};
  int arr6[]={6,66,666,6666};
  int arr7[]={7,77,777,7777};
  int arr8[]={8,88,888,8888};
  int arr9[]={9,99,999,9999};
  int n[t];
  for(int i=0;i<t;i++){
    cin>>n[i];
  }
  for(int i=0;i<t;i++){
      int count=0;

    for(int a=0;a<4;a++){
      count=0;
      if(n[i]==arr1[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
        cout<<count<<endl;
      }
    }
    for(int a=0;a<4;a++){
      count=10;
      if(n[i]==arr2[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
      cout<<count<<endl;
      }
    }
    for(int a=0;a<4;a++){
        int count=20;

      if(n[i]==arr3[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
    for(int a=0;a<4;a++){
      count=30;
      if(n[i]==arr4[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
    for(int a=0;a<4;a++){
      count=40;
      if(n[i]==arr5[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
    for(int a=0;a<4;a++){
      count=50;
      if(n[i]==arr6[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
    for(int a=0;a<4;a++){
      count=60;
      if(n[i]==arr7[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
    for(int a=0;a<4;a++){
      count=70;
      if(n[i]==arr8[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
    for(int a=0;a<4;a++){
      count=80;
      if(n[i]==arr9[a]){
        if(a==0){
          count+=1;
        }
        if(a==1){
          count+=3;
        }
        if(a==2){
          count+=6;
        }
        if(a==3){
          count+=10;
        }
            cout<<count<<endl;

      }
    }
  }
  return 0;
}
