#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string red,blue;
		cin>>red>>blue;
  int redcnt=0,bluecnt=0;
  for(int i=0;i<n;i++){
  	if(red[i]<blue[i]){
  		bluecnt++;
  	}else if(blue[i]<red[i]){
  		redcnt++;
  	}else{
  		bluecnt++;
  		redcnt++;
  	}
  }
  if(redcnt<bluecnt){
  	cout<<"BLUE"<<endl;
  }
else  if(bluecnt<redcnt){
  	cout<<"RED"<<endl;
  }
  else{
  	cout<<"EQUAL"<<endl;
  }
	}
	return 0;
}
