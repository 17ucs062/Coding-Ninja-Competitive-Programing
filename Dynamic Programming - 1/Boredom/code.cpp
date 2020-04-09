#include<bits/stdc++.h>
int solve(int n,vector<int>A){
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    map<int,int> dp;
    map<int,int> m;
    for(int i = 0; i<n; i++)
        m[A[i]]++;
    dp[1] = 1*m[1];
    dp[2] = max(dp[1],2*m[2]);
    int points = 0, temp = 0;
    for(int i = 3; i<=1000; i++)
    {
        dp[i] = max(dp[i-1], dp[i-2] + i*m[i]);
    }
        // temp = (i->first)*(i->second);
        
//         for(auto j = m.begin(); j != m.end(); j++)
//         {
//             // if(j->first)
//             if(j->first!= j->first+1 && j->first != j->first-1)
//             {
//                 temp = temp + (j->first)*(j->second);
//             }
//                 // if(++j != m.end());
//             j++;
//             if(j==m.end())
//                 break;
//         }
//         dp[i->first] = temp;
//         if(points < temp)
//             points = temp;
//     }
    // int *arr = new int[n];
    // int points = 0;
    // if(A[0] > A[1])
    // {
    //     points = A[0];
    //     A[1] = 0;
    // }
//     int last_ele = A[0], points = A[0], flag = 0, temp;
//     int last_points = 0;
//     for(int i = 1; i<n; i++)
//     {
//         if(flag == 0 && A[i] >= A[i+1])
//         {
//             temp = last_points + A[i];
//             // flag == 0;
//             // last_ele = A[i];
//         }
//         else if(flag==1)
//         {
//             temp = points + A[i];
//         }
//         if(points < temp)
//         {
//             // if(flag == 0)
//             //     last_ele = A[i];
//             last_points = points;
//             points = temp;
//             flag = 0;
//         }
//         else
//             flag = 1;
//         // if((A[i] >= A[i-1] && A[i] >= A[i+1]) )//|| (A[i] == A[i-1] && A[i] == A[i+1]))
//         // {
//         //     points = points + A[i];
//         //     A[i-1] = 0;
//         //     A[i+1] = 0;
//         //     i++;
//         // }
        
//     }
    // if(A[n-1]!=0)
    //     points = points + A[n-1];
    return dp[1000]; 
}


#include<iostream>
#include<vector>
using namespace std;
#include "solution.h"
int n;
vector<int>A;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		A.push_back(x);
	}
	cout<<solve(n,A)<<endl;
}
