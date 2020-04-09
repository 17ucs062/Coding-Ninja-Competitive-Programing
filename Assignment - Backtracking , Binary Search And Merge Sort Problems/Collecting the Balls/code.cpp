#include<bits/stdc++.h>
using namespace std;
// int collect(int t,int n, int k, int sharma, int singh)
// {
//     if(n==0)
//     {
//         if(t/2 <= sharma)
//             return k;
//         else
//             return collect(t,t,k+1,0,0);
//     }
//     else
//     {
//         if(n<10)
//         {
//             sharma = sharma + n;
//             n = 0;
//         }
//         else
//         {
//             sharma = sharma + k;
//             n = n-k;
//             singh = singh + (n)/10;
//         }
//         int ans = collect(t, n-(n/10), k, sharma, singh);
//         return ans;
//     }
// }

int check(long long n, long long k)
{
    long long current = n, s = 0;
    if(n%2==0)
        n = n/2;
    else
        n = n/2+1;
    while(current>0)
    {
        if(current<k)
        {
            s=s+current;
            current  = 0;
            continue;
        }
        else
        {
            s = s + k;
            current  = current - k;
            current = current - (current/10);
            // if(k==1)
            // {
            //     cout << s << " " << current << endl;
            // }
        }
    }
    if(s>=n)
        return 1;
    else
        return 0;
}

int main()
{
    long long n;
    cin >> n;
    long long flag = 0, ans;
    long long k, l = 1, h = n;
    while(l<=h)
    {
        k = (l + h)/2;
        if(check(n,k))
        {
             // cout << l << " "  << k  << " " << h<<  endl;
            ans = k;
            h = k - 1;
        }
        else
        {
            // flag = 0;
            l = k+1;
        }
    }
        // k = collect(t, n, 1, 0, 0);
    cout << ans;
	return 0;
}
