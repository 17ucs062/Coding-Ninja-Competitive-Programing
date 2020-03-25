#include<bits/stdc++.h>
using namespace std;

int binary_s(long long arr[], long long n, long long k, long long m)
{
    long long l = 0, mid;
    long long r = n-1;
    long long flag = 0;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(arr[mid] > m)
            r = mid-1;
        else if(arr[mid]==m)
        {
            flag = 1;
            break;
        }
        else
            l = mid+1;
    }
    // if(flag == 0)
    // {
    long long sum = 0;
    // while(arr[mid-1]>=m && mid-1 >= 0)
    //     mid = mid-1;
    for(long long i = mid; i<n; i++)
    {
        sum = sum + arr[i]/m;
        if(sum >= k)
            return 1;
    }
    return 0;
//         }
//         else
//         {
            
//         }
    // }
}
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long *box = new long long[n];
        for(long long i = 0; i<n; i++)
            cin >> box[i];
        sort(box, box+n);

        long long l = 0, mid, in;
        long long r = box[n-1], j = 0, flag = 0;
        while(l<=r)
        {
            j = 0;
            mid = (l+r)/2;
            j = binary_s(box,n,k,mid);
            if(j == 0)
                r = mid-1;
            else
            {
                in = mid;
                l = mid+1;
            }
        }    
        cout << in << endl;
        
    }
	// Write your code here
}
