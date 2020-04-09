#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,x;
    cin >> n >> k >> x;
    if(n == 0)
    {
        cout << -1 << " " << 1;
        return 0;
    }
    // if(x>1000)
    //     {
    //         // cout << "Runtime Error (NZEC)";
    //         return 0;
    //     }
    long long *arr = new long long[1024];
    memset(arr,0,sizeof(arr));
    for(long long i = 0; i<n;i++)
    {
        long long y;
        cin >> y;
        // if(y>1000)
        // {
        //     // cout << "Runtime Error (NZEC)";
        //     return 0;
        // }
            arr[y]++;
    }
    // cout << (1^0) <<endl;
    long long *dp = new long long[1024];
    // memset(dp,0,sizeof(dp));
    int flag = 0;
    if(x != 0)
    {
    for(long long i = 0; i<k; i++)
    {
        // memset(dp,0,sizeof(dp));
        for(int z =0; z<1024; z++)
            dp[z] = 0;
        flag = 0;
        // if(i==1)
        //     cout << dp[20] << endl;
        for(long long j = 0; j<1024; j++)
        {
            // if(j == 20)
            //     cout << j << " " << dp[20] << endl;
            if(arr[j] != 0)
            {
                // if(i==1)
                    // cout << j << " " << arr[j] << endl;
                
                if(flag == 1 && arr[j] == 1)
                {
                    dp[j] += 1;
                    // if(i==1)
                        // cout << j << " " << dp[j] << endl;
                    flag = 0;
                    continue;
                }
                
                long long temp = j^x;
                // if(i == 1)
                // cout << j << " " << temp << endl;
                if(flag == 1)
                {
                    if((arr[j]-1)%2==0)
                    {
                        dp[temp] += (arr[j]-1)/2;
                        // cout << temp << " " << dp[temp] << endl;
                        dp[j] += (arr[j]-1)/2 + 1;
                        // cout << j << " " << dp[j] << endl;
                        flag = 0;
                    }
                    else
                    {
                        dp[temp] += ((arr[j]-1)/2)+1;
                        // cout << temp << " " << dp[temp] << endl;
                        dp[j] += (arr[j]/2);
                        // cout << j << " " << dp[j] << endl;
                        flag = 1;
                    }
                }
                // if(flag == 0)
                else
                {
                    
                    if(arr[j]%2==0)
                    {
                        dp[temp] += arr[j]/2;
                        // cout << temp << " " << dp[temp] << endl;
                        dp[j] += arr[j]/2;
                        // cout << j << " " << dp[j] << endl;
                        flag = 0;
                    }
                    else
                    {
                      

                        int f = arr[j]/2;
                        // if(j==28 && i == 1)
                            // cout << dp[20] << " " << f << endl;
                        dp[temp] += f + 1;
                        // if(j==3 && i == 1)
                            // cout << arr[11] << endl;
                        // if(i==1)
                        // cout << temp << " " << dp[temp] << endl;
                        
                        dp[j] += (arr[j]/2);
                        // if(i==1)
                        // cout << j << " " << dp[j] << endl;
                        flag = 1;
                        
                    }
                }
            }
        }
    
        // for(int)
        for(long long z = 0; z<1024; z++)
        {
            arr[z] = dp[z];
            // if(arr[z] != 0 )
                // cout << z <<"," << arr[z] << " ";
        }
        // cout << endl;
    }
    }
    
    long long min = -1, max = -1;
    for(long long i = 0; i<1024; i++)
    {
        if(arr[i] != 0 && min == -1)
        {
            min = i;
            break;
        }
    }
    for(long long i = 1023; i>=0; i--)
    {
        if(arr[i] != 0 && max == -1)
        {
            max = i;
            break;
        }
    }
    
    cout << max << " " << min;
    // for(int i =)

    delete [] dp;
    delete [] arr;
    return 0;
}
