#include <bits/stdc++.h>
using namespace std;
int x,y;
int l;
int flag = 0;

int solve(int **dp, int *wt, int *val, int n, int W)
{
    // cout << "hello" << " " << n << " " << W << endl;
    if(n==0 || W==0)
    {
        return 0;
    }
    if(dp[n][W] != -1)
    {
        // cout << dp[n][W] << endl;
        return dp[n][W];
    }
    int ans = 0;
    if(wt[n-1] <= W)
    {
        ans = val[n-1] + solve(dp,wt,val,n-1,W-wt[n-1]);
        // dp[n][W][1] += wt[n-1];
        // *count += wt[n-1];
    }
    // cout << ans;
    int last = ans;
    ans = max(ans,solve(dp,wt,val,n-1,W));
    // cout << ans << " " << last << " " << *count << " " << n << " " << W << endl ;
    // if(last!=ans)
    //     dp[n][W][1] -= wt[n-1];
    //     *count -= wt[n-1];
    // cout << ans << " " << last << " " << *count << " " << n << " " << W << endl ;
    // (*count)++;
    // *a = ans;
    dp[n][W] = ans;
    return ans;
}

int main()
{
    int budget;
    cin >> budget;
    int n;
    cin >> n;
    while(budget && n)
    {
        flag = 0;
        x = n;
        y = budget;
        // int dp[n+1][500][2];
        // memset(dp,-1,sizeof(dp));
        int** dp = new int*[n+1];
        for(int i = 0; i<=n; i++)
        {
            dp[i] = new int[budget+1];
            for(int j = 0; j<=budget; j++)
                dp[i][j] = -1;                    

        }
        int *cost = new int[n];
        int *fun = new int[n];
        for(int i = 0; i<n; i++)
        {
            cin >> cost[i];
            cin >> fun[i];
        }
        int count = 0;
        int ans = solve(dp,cost,fun,n,budget);
        int i;
        for( i=0;i<=budget;i++)
        {
            if(solve(dp,cost,fun,n,i)==ans)
            {
                break;

            }
        }

        cout << i << " " << ans << endl;
        cin >> budget >> n;
    }
    return 0;
}
