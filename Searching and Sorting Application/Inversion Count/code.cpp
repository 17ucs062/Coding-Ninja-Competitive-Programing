void merge(int arr[],long long l, long long mid, long long r, long long *count)
{
    // for(int c = l; c<=r; c++)
    //     cout << arr[c] << " ";
    // cout << endl;
    long long size1 = mid-l+1, size2 = r-mid;
    long long a[size1];
    long long b[size2];
    for(long long i = 0; i<size1; i++)
        a[i] = arr[i+l];
    for(long long i = 0; i<size2; i++)
        b[i] = arr[i+mid+1];
    // for(int i  = 0; i<size1; i++)
    //     cout << a[i] << " ";
    // for(int j = 0; j<size2; j++)
    //     cout <<b[j] << " ";
    // cout << endl;
    long long i = 0;
    long long j = 0;
    long long k = l;
    while(i!=size1 && j!=size2)
    {
        if(a[i]<=b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
           // cout << 1 << " " << mid << " "<< i<<endl;
            (*count)= *count + mid - l - i + 1;
           // (*count)++;
        }
        k++;
    }
    while(i!=size1)
    {
        arr[k] = a[i];
        i++;
        k++;
       // cout << 1 << endl;
      //  (*count)++;
    }
    while(j!=size2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    // for(int c = l; c<=r; c++)
    //     cout << arr[c] << " ";

    
    //   cout << *count;
}





void merge_sort(int arr[], long long l, long long r, long long *count)
{
    if(l<r)
    {
        long long mid = (l+r)/2;
        merge_sort(arr,l,mid,count);
        merge_sort(arr,mid+1,r,count);
        merge(arr,l,mid,r,count);
    }
}
long long solve(int A[], int n)
{
    long long count = 0;
    merge_sort(A,0,n-1,&count);
    //out << count;
    // for(int c = 0; c<=n-1; c++)
    //     cout << A[c] << " ";
    return count;
    	// Write your code here.
}

#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005
#include "solution.h"
int main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}
