#include <bits/stdc++.h>
using namespace std;

int cal_health(int **magrid, int m, int n)
{
    int **dp = new int*[m];
    for(int i = 1; i<m; i++)
        dp[i] = new int[n];
    if(magrid[m-1][n-1] < 0)
        dp[m-1][n-1] = -1*magrid[m-1][n-1] + 1;
    else
        dp[m-1][n-1] = magrid[m-1][n-1];
    magrid[m-1][n-1] = 0;
    // cout << dp[m-1][n-1] << endl;
    for(int i = m-2; i>0; i--)
    {
        dp[i][n-1] = dp[i+1][n-1] - magrid[i+1][n-1];
        if(dp[i][n-1] <= 0)
            dp[i][n-1] = 1;
    }

    for(int i = n-2; i>0; i--)
    {
        dp[m-1][i] = dp[m-1][i+1] - magrid[m-1][i+1];
        if(dp[m-1][i] <= 0)
            dp[m-1][i] = 1;
    }
    for(int i = m-2; i>0; i--)
        for(int j = n-2; j>0; j--)
        {
            dp[i][j] = min(dp[i+1][j]-magrid[i+1][j], dp[i][j+1]-magrid[i][j+1]);
            if(dp[i][j] <=0)
                dp[i][j] = 1;
        }
    int ans = dp[1][1];
    for(int i = 1; i < m; ++i) 
        delete[] dp[i];
    delete [] dp;
    // cout << ans;
   // if(magrid[1][1]<0)
        ans = ans - magrid[1][1];
    return ans;
    // return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int r,c;
        cin >> r >> c;
        int **magrid = new int*[r+1];
        for(int i = 1; i<=r; i++)
        {
            magrid[i] = new int[c+1];
            for(int j = 1; j<=c; j++)
                cin >> magrid[i][j];
        }
       cout << cal_health(magrid,r+1,c+1) << endl;
        for(int i = 1; i <= r; ++i) 
            delete[] magrid[i];
        delete [] magrid;
    }

    return 0;
}
