#include<iostream> 
using namespace std;
int main(){
  int n;cin>>n;
  int arr[n],min_pos_1=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int minimum_difference=99999;
  int min_pos_2=0;


  for(int i=0;i<n-1;i++){
    
  
      if(minimum_difference>(abs(arr[i+1]-arr[i]))){
        minimum_difference=(abs(arr[i+1]-arr[i]));
        min_pos_1=i;
        min_pos_2=i+1;
      }
   
  }
  if(abs(arr[0]-arr[n-1])<minimum_difference){
    cout<<"1"<<" "<<n;
    return 0;
  }

  cout<<min_pos_1+1<<" "<<min_pos_2+1;
  return 0;
}
