#include <bits/stdc++.h>
using namespace std;

int optimise(bool *arr, int **dp, int i, int n, int open, int close)
{
    if(open==n/2 && close==n/2)
        return 1;
    if(open > n/2 || close > n/2)
        return 0;
    if(dp[i][open - close] != -1)
        return dp[i][open-close];
    int cost;
    if(open == close || arr[i] == true)
    {
        dp[i][open-close] = optimise(arr,dp,i+1,n,open+1,close);
        return dp[i][open-close];
    }
    else if(open > close)
    {
        if(open<n/2)
        {
            cost = optimise(arr,dp,i+1,n,open + 1,close);
            cost += optimise(arr,dp,i+1,n,open,close+1);

        }
        else
        {
            cost = optimise(arr,dp,i+1,n,open,close+1);
        }
        dp[i][open-close] = cost;
        return cost;
    }

}

int main()
{
    int d;
    cin >> d;
    while(d--)
    {
        int n, k;
        cin >> n >> k;
        int y = 2*n;
        bool *arr = new bool[y];
        // memset(arr,false,sizeof(arr));
        for(int i = 0; i<y; i++)
            arr[i] = false;
        // for(int i = 0; i<2*n; i++)
        //     cout << arr[i] << endl;
        // cout << "over" << endl;
        int flag = 0;
        for(int i = 0; i<k; i++)
        {
            int x;
            cin >> x;
            if(x == 0)
            {
                flag = 1;
                break;
            }
            arr[x-1] = true; 
            // optimise(arr[i],dp,0,2*n,0,0,);

        }
        if(flag == 1)
        {
            cout << 0 << endl;
            delete[] arr;
            continue;
        }
        int **dp = new int*[2*n];
        for(int i = 0; i<2*n; i++)
        {
            dp[i] = new int[n+1];
            for(int j = 0; j<=n; j++)
                dp[i][j] = -1;
        }
        // for(int i = 0; i<2*n; i++)
        // {
        //     // dp[i] = new int[n+1];
        //     for(int j = 0; j<=n; j++)
        //         cout << dp[i][j] << " ";
        //     cout << endl;
        //         // dp[i][j] = -1;
        // }
        // // memset(dp,-1,sizeof(dp));
        int ans = optimise(arr,dp,0,2*n,0,0);
        // cout << endl;
        // for(int i = 0; i<2*n; i++)
        // {
        //     // dp[i] = new int[n+1];
        //     for(int j = 0; j<=n; j++)
        //         cout << dp[i][j] << " ";
        //     cout << endl;
        //         // dp[i][j] = -1;
        // }
        cout << dp[0][0] << endl;
        delete [] arr;
        for(int i = 0; i<2*n; i++)
            delete [] dp[i];
        delete [] dp;
    }
    return 0;
}
