#include<bits/stdc++.h>
int minCount(int n){

    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    int *dp = new int[n+1];
    if(n==0)
        return 0;
    if (sqrt(n) - floor(sqrt(n)) == 0) 
        return 1;
    dp[0] = 0;
    dp[1] = 1;
    if(n>=2)
        dp[2] = 2;
    if(n>=3)
        dp[3] = 3;
    
    // if(dp[n] )

    int res;
    for(int i = 4; i<=n; i++)
    {
        dp[i] = i;
        for (int x = 1; x <= ceil(sqrt(i)); x++) { 
            int temp = x*x; 
            if (temp > i) 
                break; 
            else
            {
                dp[i] = min(dp[i],( 1 + dp[i-temp]));
                // if(i==12)
                    // cout << res << " "  << dp[i-temp] << endl;
                // dp[i] = res; 
            }
        }
    }
    // cout << dp[8] << endl;
    res = dp[n];
    delete [] dp;
    return res; 
}
// int temp_c = 0, y = j-2, x ;
// while(y>1)
// {
//     x = y; 
//     sum = 0;
//     int temp = n - sum;
//     while(1)
//     {
//         if(x*x > temp)
//             x--;
//         else
//         {
//             temp_c++;
//             sum = sum + x*x;
//             temp = temp - sum;
//         }
//         if(sum == n)
//             break;
//     }
//     y--;
//     if(temp_c < count)
//         count = temp_c;
// }}


#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    
    int num;
    cin >> num;
    cout << minCount(num);
    
}

