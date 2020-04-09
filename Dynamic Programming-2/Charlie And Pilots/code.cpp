#include <bits/stdc++.h>
using namespace std;

int optimise(int **salary, int dp[][5001], int i, int n, int capt, int assis)
{
    if(i==n)
        return 0;
    if(dp[i][capt-assis] != -1)
        return dp[i][capt-assis];
    int cost = INT_MAX;
    if(assis == capt)
    {
        dp[i][capt-assis] = salary[i][1] + optimise(salary,dp,i+1,n,capt,assis+1);
        return dp[i][capt-assis];
    }
    else if(assis > capt)
    {
        if(assis<n/2)
            cost = min(salary[i][1] + optimise(salary,dp,i+1,n,capt,assis+1), salary[i][0] + optimise(salary,dp,i+1,n,capt+1,assis));
        else
        {
            cost = salary[i][0] + optimise(salary,dp,i+1,n,capt+1,assis+1);
        }
        dp[i][capt-assis] = cost;
        return cost;
    }
    
}
int main()
{

    int n;
    cin >> n;
    int **salary = new int*[n];
    for(int i = 0; i<n; i++)
    {
        salary[i] = new int[2];
        cin >> salary[i][0] >> salary[i][1];
    }
    // for(int i = )
//     for(int i = 0; i<n; i++)
//     {
//         // salary[i] = new int[2];
//         // cin >> salary[i][0] >> salary[i][1];
//         cout << salary[i][0] << " " << salary[i][1] << endl;
        
//     }

    int dp[10001][5001];
    memset(dp,-1,sizeof(dp));
    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 0; j<n/2; j++)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }
    int sum = 0;
    // for(int i = 0; i<n; i++)
    //     for(int j = 0)
    int ans = optimise(salary,dp,0,n,0,0);
    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 0; j<n/2; j++)
    //     {
    //         if(dp[i][j] != -1)
    //             sum += dp[i][j];
    //     }
    //         // cout << dp[i][j] << " "
    //     // cout << endl;
    // }
    cout << dp[0][0] << endl;
    return 0;

}
