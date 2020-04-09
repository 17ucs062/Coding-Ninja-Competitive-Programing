#include <bits/stdc++.h>
using namespace std;

int calProfit(int *arr, int dp[][10][2], int n, int k, int t)
{
    if(n == 0)
        return 0;
    if(dp[n][k][t] != -1)
        return dp[n][k][t];
    int profit = calProfit(arr+1,dp,n-1,k,t);
    
    if(t == 1)
        profit = max(profit, arr[0] + calProfit(arr+1,dp,n-1,k-1,0));
    else
    {
        if(k==0)
            return 0;
        else
            profit = max(profit, calProfit(arr+1,dp,n-1,k,1) - arr[0]);
    }
    dp[n][k][t] = profit;
    return profit;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        int n;
        cin >> n;
        int *price = new int[n];
        for(int i = 0; i<n; i++)
            cin >> price[i];
        int dp[31][10][2];
        memset(dp,-1,sizeof(dp));
        cout << calProfit(price,dp,n,k,0) << endl;
       
    }
    return 0;
}
