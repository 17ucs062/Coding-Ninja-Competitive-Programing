#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long start[n+1], end[n+1], dp[n+1];
    memset(start,0,sizeof(start));
    memset(end,0,sizeof(end));
    memset(dp,0,sizeof(dp));
    long long m;
    cin >> m;
    for(long long i = 1; i<=m; i++)
    {
        long long l,r;
        cin >> l >> r;
        start[l]++;
        end[r]++;
    }
    dp[1] = start[1];
    for(long long i = 2; i<=n; i++)
    {
        dp[i] = start[i] + dp[i-1] - end[i-1];
    }
    
    // for(int i =1; i<=n; i++)
    //     cout << dp[i] << " ";
    // cout << endl;
    
    long long atleast[n+1];
    memset(atleast,0,sizeof(atleast));
    for(long long i = 1; i<=n; i++)
        atleast[dp[i]]++;
//      for(int i =1; i<=n; i++)
//         cout << atleast[i] << " ";
//     cout << endl;
    
    for(long long i = n-1; i> 0; i--)
    {
        // cout << atleast[i] << " " << atleast[i+1] <<" " << i+1 << endl;
        atleast[i] += atleast[i+1];
        // sum += atleast[i];
    }
    // for(int i =1; i<=n; i++)
    //     cout << atleast[i] << " ";
    // cout << endl;
        
    long long q;
    cin >> q;
    while(q--)
    {
        long long x;
        cin >> x;
        cout << atleast[x] << endl;
    }
    return 0;
}
