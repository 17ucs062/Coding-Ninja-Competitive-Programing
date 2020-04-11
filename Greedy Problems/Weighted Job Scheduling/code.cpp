#include<bits/stdc++.h>
using namespace std;

struct jobs{
    long long start,finish,profit;
};

bool compare(jobs a, jobs b)
{
    return a.finish < b.finish;
}

long long binaryS(jobs arr[],long long i)
{
    int l = 0;
    int h = i-1;
    int mid;
    int flag = 0;
    
     while (l <= h) 
    { 
        int mid = (l + h) / 2; 
        if (arr[mid].finish <= arr[i].start) 
        { 
            if (arr[mid + 1].finish <= arr[i].start) 
                l = mid + 1; 
            else
                return mid; 
        } 
        else
            h = mid - 1; 
    } 
  
    return -1; 
    
}

int main()
{
    long long n;
    cin >> n;
    jobs arr[n];
    for(long long i = 0; i<n; i++)
        cin >> arr[i].start >> arr[i].finish >> arr[i].profit;
    
    sort(arr, arr+n, compare);
    
    long long dp[n];
    dp[0] = arr[0].profit;
    // long long total = 0;//, last[n], end_time = 0, k = 0;
    for(long long i = 1; i<n; i++)
    {
        long long including = arr[i].profit;
        long long c = binaryS(arr,i);
        
        //     if(arr[j].finish <= arr[i].start)
        //     {
        //         c = j;
        //         break;
        //     }
        // }
        if(c != -1)
            including += dp[c];
        dp[i] = max(dp[i-1],including);
    }
    cout << dp[n-1];
    //Write your code here
    return 0;
}
