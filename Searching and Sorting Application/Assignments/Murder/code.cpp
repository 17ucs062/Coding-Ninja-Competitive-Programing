#include<bits/stdc++.h>
using namespace std;

void merge(long long arr[],long long l, long long mid, long long r, long long *sum)
{
    long long size1 = mid-l+1, size2 = r-mid;
    long long a[size1];
    long long b[size2];
    for(long long i = 0; i<size1; i++)
        a[i] = arr[i+l];
    for(long long i = 0; i<size2; i++)
        b[i] = arr[i+mid+1];
    long long i = 0;
    long long j = 0;
    long long k = l;
    // int flag = 0, sa;
    while(i!=size1 && j!=size2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            i++;
            // *sum = *sum+arr[k];
             //for(int s = 0; s<i; s++)
            // if(flag==0)
            // {
                *sum = *sum + arr[k]*(size2-j);
                 // cout << arr[k]*size2  <<" a"<< endl;
            // }
            // else
            // {
            //     for(int s = l; s<i; s++)
            //     {
            //         *sum = *sum + a[i];
            //     cout << a[i] <<" b" << " ";
            //     }
            //     cout << endl;
            //     flag = 0;
            // }
        // }
        // else if(a[i]==b[j])
        // {
        //     //sa = a[i];
        //    // arr[k++] = a[i++];
        //     arr[k] = b[j++];
        //     flag = 1;
        }
        else
        {
            arr[k] = b[j];
            j++;
           // (*count)= *count + mid - l - i + 1;
        }
        k++;
    }
    while(i!=size1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j!=size2)
    {
        arr[k] = b[j];
        k++;
        j++;
        // if(size2!=1 && size1 == size2)
        // {
        //     for(int s = 0; s<size1; s++)
        //     {
        //         *sum = *sum+a[s];
        //         cout << a[s] << " c"<<endl;
        //     }
        // }
    }
}
void merge_sort(long long arr[], long long l, long long r, long long *sum)
{
    if(l<r)
    {
        long long mid = (l+r)/2;
        merge_sort(arr,l,mid,sum);
        merge_sort(arr,mid+1,r,sum);
        merge(arr,l,mid,r,sum);
    }
}
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, sum = 0;
        cin >> n;
        long long *arr=new long long[n];
        for(long long i = 0; i<n; i++)
            cin >> arr[i];
        int x = arr[0];
        // for(long long i = 0; i<n; i++)
        //     cout << arr[i];
        merge_sort(arr,0,n-1,&sum);
        cout << sum;
        cout << endl;
    }
    return 0;
}
