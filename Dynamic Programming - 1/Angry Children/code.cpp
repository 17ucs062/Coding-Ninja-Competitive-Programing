#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;
    long long arr[n];
    for(int i = 0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    long long sum[n];
    memset(sum,0,sizeof(sum));
    sum[0] = arr[0];
    for(long long i = 1; i<n; i++)
    {
        sum[i] = arr[i] + sum[i-1];
        // cout << sum[i] << endl;
    }

    long long ans, temp = 0, flag = 0;
    for(long long i = 1; i<k; i++)
    {
        temp += (i)*arr[i] - sum[i-1];
        // temp = 0;
        // if(i+k-1 > n)
        //     break;
        // for(int j = 0; j<=k; j++)
        // {
        //     temp += abs(arr[i] - arr[j]); 
        // }
        // if(flag == 0)
        // {
        //     ans = temp;
        //     flag = 1;
        // }
        // else
        //     ans = min(ans,temp);
    }
    // cout << temp << endl;
    ans = temp;
    long long ans1[n],z = 0;
    ans1[z++] = ans;
    long long old_ans = ans;
    for(long long i = 1; i<n; i++)
    {
        if(i+k-1 >= n)
            break;
        long long new_ans = abs(old_ans - 2*(sum[i + k - 2] - sum[i-1] ) + (k-1)*arr[k+i-1] + (k-1)*arr[i-1]);  
        // cout << new_ans << endl;
        ans1[z++] = new_ans;
        old_ans = new_ans;
    }
    
    long long min = ans1[0];
    for(long long i = 1; i<z; i++)
    {
        if(min > ans1[i])
            min = ans1[i];
    }
    cout << min;
    return 0;
}
