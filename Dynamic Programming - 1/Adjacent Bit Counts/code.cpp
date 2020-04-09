// #include <bits/stdc++.h>
// using namespace std;
// // int k = 0;

// int count(int dp[][100][2], int n, int k, int b)
// {
//     if(n==0)
//     {
//         if(k!=0)
//             return 0;
//         return 1;
//     }
//     if(k<0)
//         return 0;
//     if(b == 0 && dp[n][k][0] != 0)
//         return dp[n][k][0];
//     if(b == 1 && dp[n][k][1] != 0)
//         return dp[n][k][1];
//     // if(b == 1)
//     // {
//         int a = count(dp, n-1, k-1, 1);
//         int e = count(dp,n-1,k,0);
//         dp[n][k][1] = a + e;
//         // return a+b; 
//     // }
//     // else if(b == 0)
//     // {
//         int c = count(dp,n-1,k,0);
//         int d = count(dp,n-1,k,1);
//         dp[n][k][0] = c + d;
//         return a+b+c+d;
//     // }
    
// }
// C++ program to count number of binary strings 
// with k times appearing consecutive 1's. 
#include <bits/stdc++.h> 
using namespace std; 

int countStrings(int n, int k) 
{ 
	// dp[i][j][0] stores count of binary 
	// strings of length i with j consecutive 
	// 1's and ending at 0. 
	// dp[i][j][1] stores count of binary 
	// strings of length i with j consecutive 
	// 1's and ending at 1. 
    long long modulo = pow(10,9) + 7;
	int dp[n + 1][k + 1][2]; 
	memset(dp, 0, sizeof(dp)); 

	// If n = 1 and k = 0. 
	dp[1][0][0] = 1; 
	dp[1][0][1] = 1; 

	for (int i = 2; i <= n; i++) { 
		// number of adjacent 1's can not exceed i-1 
		for (int j = 0; j <= k; j++) { 
			dp[i][j][0] = (dp[i - 1][j][0]%modulo + dp[i - 1][j][1]%modulo)%modulo; 
			dp[i][j][1] = (dp[i - 1][j][0])%modulo; 

			if (j - 1 >= 0) 
				dp[i][j][1] =  (dp[i][j][1]%modulo + dp[i - 1][j - 1][1]%modulo)%modulo; 
		} 
	} 

    // long long modulo = pow(10,9) + 7;
	return (dp[n][k][0] + dp[n][k][1])%modulo; 
} 

// Dr/iver code 
// int main() 
// { 
	// int n = 5, k = 2; 
	// cout << countStrings(n, k); 
	// return 0; 
// }


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s,n, k;
        cin >> s >> n >> k;
        // int dp[n+1][100][2];
        // for(int i = 0; i<=n; i++)
        //     for(int j = 0;j<=k; j++)
        //     {
        //         dp[i][j][0] = 0;
        //         dp[i][j][1] = 1;
        //     }
        // // memeset(dp,0,sizeof(dp));
        int ans = countStrings(n, k);
        // cout << ans << endl;
        // ans = count(dp, n, k, 0);
        // cout << ans << endl;
        cout << s << " " << ans << endl;
    }    
    return 0;
}
