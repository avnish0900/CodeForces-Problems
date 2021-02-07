  
#include <iostream>
using namespace std;

int main()
{
  int total_pages;cin>>total_pages;int arr[7];
  for(int i=0;i<7;i++){ cin>>arr[i];}
  int i=0,n=arr[0];
  while(n<total_pages){
    i++;i%=7;n=n+arr[i];
  }cout<<i+1;
  return 0;
}
