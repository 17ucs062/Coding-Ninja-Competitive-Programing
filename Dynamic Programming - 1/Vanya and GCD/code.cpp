#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long modulo = pow(10,9) + 7;
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i<n; i++)
        cin >> arr[i];

    int **dp = new int*[n];
    for(int i = 0; i<n; i++)
        dp[i] = new int[100];

    for(int i = 0; i<n; i++)
        for(int j = 0; j<100; j++)
            dp[i][j] = 0;

    for(int i = 0; i<n; i++)
    {
        // if(i == 0)
        dp[i][arr[i]] = 1;
        for(int k = i-1; k>=0; k--)
        {
            // if(i == 0)
            //     dp[i][arr[i]] = 1;
            // else 
            if(arr[i] > arr[k])
            {
                // cout << "hello " << i <<" "<< k ;
                for(int j = 1; j<=100; j++)
                {
                    int g;
                    // if(dp[i][j] == 0)
                    // {
                    //     g = __gcd(arr[i],j)    
                    // }
                    g = __gcd(arr[i],j);
                    dp[i][g] = (dp[i][g]%modulo + dp[k][j]%modulo)%modulo;
                    // cout << g << endl;
                }
            }

        }
    }
    long long sum = 0;
    for(int i = 0; i<n; i++)
    {
        // cout << dp[i][1] << endl;
        sum += dp[i][1];
    }
    cout << sum%modulo;
    return 0;
}
