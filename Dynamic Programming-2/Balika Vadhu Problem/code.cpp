#include <bits/stdc++.h>
using namespace std;

int dp[101][101][101];


int lcs(char *s1, char *s2,int k)
{
    int m = strlen(s1);
    int n = strlen(s2);
    if(k<=0)
        return 0;
    if(m == 0 || n == 0)
        return INT_MIN;
    if(dp[m][n][k] != -1)
        return dp[m][n][k];
    
    
    if(s1[0] == s2[0])
    {
        int x = lcs(s1+1,s2+1,k-1) + s1[0];
        dp[m][n][k] = max(x, max(lcs(s1+1,s2,k), lcs(s1,s2+1,k)));
        
    }
    else
    {
        dp[m][n][k] = max(lcs((s1+1),s2,k),lcs(s1,s2+1,k));
    }
    // dp[m]
    return dp[m][n][k];
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        char s1[101], s2[101];
        cin >> s1 >> s2;
        int k;
        cin >> k;
        int ans = lcs(s1,s2,k);
        if(ans<0)
            ans = 0;
        // for(int i = 0;i<=strlen(s1); i++)
        // {
        //     for(int j = 0; j<=strlen(s2); j++)
        //     {
        //         if(ans<dp[i][j][k])
        //             ans = dp[i][j][k];
        //     }
        // }
        cout << ans << endl;
    }
    return 0;
}
