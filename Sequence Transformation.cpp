#include<bits/stdc++.h>
using  namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int> elements;
    for(int i=0;i<n;i++){
      int x;cin>>x;
      elements.push_back(x);
    }
    vector<int > frequency(n+1,1);
    int size =unique(elements.begin(),elements.end())-elements.begin();
    elements.resize(n);
    for(int i=0;i<size;i++){
      frequency[elements[i]]+=1;
    }
    frequency[elements[0]]-=1;
    frequency[elements[n-1]]-=1;
    int min_ans=INT_MAX;
    for(int i=0;i<size;i++){
      min_ans=min(min_ans,frequency[elements[i]]);
    }
    cout<<min_ans<<endl;
  }
  return 0;
}
