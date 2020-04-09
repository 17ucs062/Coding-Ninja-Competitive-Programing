#include<bits/stdc++.h>
// // long long solve(long long **dp, int *wt, int *val, int n, int W)
// // {
// //     // cout << "hello" << " " << n << " " << W << endl;
// //     if(n==0 || W==0)
// //         return 0;
// //     if(dp[n][W] != -1)
// //     {
// //         // cout << dp[n][W] << endl;
// //         return dp[n][W];
// //     }
// //     long long ans = 0;
// //     if(wt[n-1] <= W)
// //         ans = val[n-1] + solve(dp,wt,val,n-1,W-wt[n-1]);
// //     // cout << ans;
// //     ans = max(ans,solve(dp,wt,val,n-1,W));
// //     dp[n][W] = ans;
// //     return ans;
// // }
// int knapsack(int* wt, int* val, int n, int W){

// //   /* Don't write main().
// //    *  Don't read input, it is passed as function argument.
// //    *  Return output and don't print it.
// //    *  Taking input and printing output is handled automatically.
// //   */

// // long long** dp = new long long*[n+1];
// // 	for(long long i=0;i<=n;i++){
// // 		dp[i] = new long long[W+1];
// //         for(long long j = 0; j<=W; j++)
// //             dp[i][j] = -1;
// // 	}

// // 	// for(int i=0;i<=W;i++){
// // 	// 	dp[0][i] = -1;
// // 	// }
// // 	// for(int i=0;i<=n;i++){
// // 	// 	dp[i][0] = -1;
// // 	// }

// // // 	for(int i=1;i<=n;i++){
// // // 		for(int w=0;w<=W;w++){

// // // 			dp[i][w] = dp[i-1][w];
// // // 			if(wt[i-1] <= w){
// // // 				dp[i][w] = max(dp[i][w],val[i-1] + dp[i-1][w-wt[i-1]]);
// // // 			}
// // // 		}
// // // 	}
// //     // cout << dp[n][W] << "heyya" << endl; 
// // 	long long ans = solve(dp,wt,val,n,W);
// // 	// for(int i = 0; i<=n; i++)
// // 	// {
// // 	// for(int j = 0; j<=W; j++)
// // 	// cout << dp[i][j] << " ";
// // 	// cout << endl;
// // 	// }
// //    //delete dp array 
// // 	return ans;
//     int** dp = new int*[n+1];
// 	for(int i=0;i<=n;i++){
// 		dp[i] = new int[W+1];
// 	}

// 	for(int i=0;i<=W;i++){
// 		dp[0][i] = 0;
// 	}
// 	for(int i=0;i<=n;i++){
// 		dp[i][0] = 0;
// 	}

// 	for(int i=1;i<=n;i++){
// 		for(int w=0;w<=W;w++){

// 			dp[i][w] = dp[i-1][w];
// 			if(wt[i-1] <= w){
// 				dp[i][w] = max(dp[i][w],val[i-1] + dp[i-1][w-wt[i-1]]);
// 			}
// 		}
// 	}

// 	int ans = dp[n][W];
//     for(int i = 0; i<=n; i++)
// 	delete [] dp[i]; 
//     delete [] dp;
// 	return ans;
// }
int knapsack(int wt[], int val[], int n, int W) 
{ 
    // matrix to store final result 
    int mat[2][W+1]; 
    memset(mat, 0, sizeof(mat)); 
  
    // iterate through all items 
    int i = 0; 
    while (i < n) // one by one traverse each element 
    { 
        int j = 0; // traverse all weights j <= W 
  
        // if i is odd that mean till now we have odd 
        // number of elements so we store result in 1th 
        // indexed row 
        if (i%2!=0) 
        { 
            while (++j <= W) // check for each value 
            { 
                if (wt[i] <= j) // include element 
                    mat[1][j] = max(val[i] + mat[0][j-wt[i]], 
                                    mat[0][j] ); 
                else           // exclude element 
                    mat[1][j] = mat[0][j]; 
            } 
  
        } 
  
        // if i is even that mean till now we have even number 
        // of elements so we store result in 0th indexed row 
        else
        { 
            while(++j <= W) 
            { 
                if (wt[i] <= j) 
                    mat[0][j] = max(val[i] + mat[1][j-wt[i]], 
                                     mat[1][j]); 
                else
                    mat[0][j] = mat[1][j]; 
            } 
        } 
        i++; 
    } 
  
    // Return mat[0][W] if n is odd, else mat[1][W] 
    return (n%2 != 0)? mat[0][W] : mat[1][W]; 
} 


#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n;
  int* weights = new int[n];
  int* values = new int[n];

  for(int i = 0; i < n; i++){
    cin >> weights[i];
  }

  for(int i = 0; i < n; i++){
    cin >> values[i];
  }

  int maxWeight;
  cin >> maxWeight;

  cout << knapsack(weights, values, n, maxWeight);

}


