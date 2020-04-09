#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
#define inf 0x3f3f3f3f

vector<int>v[100005];
vector<int>mp[100005];
int ans[100005];

int main()
{
    int n,m,k,l,r,x;
    while(~scanf("%d%d",&n,&m))
    {

        for(int i=1; i<=n; i++)
            for(int j=0; j<m; j++)
            {
                scanf("%d",&x);
                mp[i].push_back(x);
            }
            memset(ans,-1, sizeof ans);
        for(int i=0; i<m; i++)
        {
            v[n].push_back(n);
        }
        ans[n]=n;
        for(int i=n-1; i>=1; i--)
        {
            for(int j=0; j<m; j++)
            {
                if(mp[i][j]>mp[i+1][j])
                    v[i].push_back(i);
                else
                    v[i].push_back(v[i+1][j]);
                    ans[i]=max(ans[i],v[i][j]);
            }

        }

        scanf("%d",&k);
        for(int i=0; i<k; i++)
        {
            scanf("%d%d",&l,&r);

            if(ans[l]<r)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long i, j;
//     cin >> i >> j;
//     long long arr[i+1][j+1],dp[i+1][j+1];
//     memset(arr,0,sizeof(arr));
//     memset(dp,0,sizeof(dp));
//     if(i == 0 || j == 0)
//         return 0;
//     for(long long x = 1; x<=i; x++)
//     {
//         for(long long y = 1; y<=j; y++)
//         {
//             cin >> arr[x][y];
//             if(x==1)
//                 dp[x][y] = 1;
//             else if(arr[x][y] >= arr[x-1][y])
//                 dp[x][y] = dp[x-1][y] + 1;
//             else
//                 dp[x][y] = 1;
                
//         }
//     }
//     // for(int x = 1;x<=i; x++)
//     // {
//     //     for(int y = 1; y<=j; y++)
//     //         cout << dp[x][y] << " ";
//     //     cout << endl;
//     // }
//     long long k;
//     cin >> k;
//     // cout << k << endl;
//     while(k--)
//     {
//         long long l,r;
//         cin >> l >> r;
//         if((l == 0 || r == 0) || (l<0 || r<0))
//             cout << "No" << endl;
//         else if(l==r)
//             cout << "Yes" << endl;
//         else if(l>r)
//             cout << "Yes" << endl;
//         else{
//             long long a = r-l+1, flag = 0;
//             for(long long x = 1; x<j; x++)
//             {
//                 if(dp[r][x] >= a)
//                 {
//                     flag = 1;
//                     cout << "Yes" << endl;
//                     break;
//                 }
//             }
//             if(flag == 0)
//                 cout << "No" << endl;
//         }
//     }
//     return 0;
// }
