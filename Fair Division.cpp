#include <bits/stdc++.h>
using namespace std;

long long findMin(long long arr[], long long n)
{
    // Calculate sum of all elements
    long long sum = 0; 
    for (long long i = 0; i < n; i++)
        sum += arr[i];
 
    // Create an array to store results of subproblems
    bool dp[n+1][sum+1];
 
    // Initialize first column as true. 0 sum is possible 
    // with all elements.
    for (long long i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // Initialize top row, except dp[0][0], as false. With
    // 0 elements, no other sum except 0 is possible
    for (long long i = 1; i <= sum; i++)
        dp[0][i] = false;
 
    // Fill the partition table in bottom up manner
    for (long long i=1; i<=n; i++)
    {
        for (long long j=1; j<=sum; j++)
        {
            // If i'th element is excluded
            dp[i][j] = dp[i-1][j];
 
            // If i'th element is included
            if (arr[i-1] <= j)
                dp[i][j] |= dp[i-1][j-arr[i-1]];
        }
    }
  
    // Initialize difference of two sums. 
    long long diff = INT_MAX;
     
    // Find the largest j such that dp[n][j]
    // is true where j loops from sum/2 t0 0
    for (long long j=sum/2; j>=0; j--)
    {
        // Find the 
        if (dp[n][j] == true)
        {
            diff = sum-2*j;
            break;
        }
    }
    return diff;
}
int main(){
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  long long t;cin>>t;
  while(t--){
    long long n;cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<(findMin(arr, n)==0 ? "YES\n" : "NO\n");
  }
  return 0;
}
