#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int n, int sum)
{
    bool** dp = new bool*[n+1];
    for(int i =0; i<=n; i++)
    {
        dp[i] = new bool[sum+1];
    }
    
    for(int j = 0; j<=sum; j++)
    {
        dp[0][j] = false;
        // dp[j][0] = true;    
    }
    for(int j = 0; j<=n; j++)
    {
        // dp[0][j] = false;
        dp[j][0] = true;    
    }
    for(int i = 1; i<=n; i++)
        for(int j = 1; j< =sum; j++)
        {
            dp[i][j] = dp[i-1][j];
            if(j>=arr[i-1])
                dp[i][j] = dp[i][j] || dp[i-1][j-arr[i-1]];
        }
    return dp[n][sum];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    bool chk = subsetSum(arr,n,sum);
    if(chk)
            cout << "Yes";
    else
        cout << "No";
    return 0;
}
