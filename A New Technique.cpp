#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n, m;
        cin >> n >> m;
        int row[n * m + 1], col[n * m + 1];
       
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                col[a] = j;
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                int a;
                cin >> a;
                row[a] = i;
            }
        }
        int ans[n][m];
        for (int i = 1; i < n*m+1; i++)
        {
            ans[row[i]][col[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << ' ';
            }
            cout << endl;
        }
    
  }
  return 0;
}
