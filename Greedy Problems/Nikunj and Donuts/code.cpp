#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long *arr = new long long[n];
    for(long long i = 0; i<n; i++)
        cin >> arr[i];
    // cout << n;
    sort(arr, arr+n, greater<long long>());
    long long sum = 0;
    for(long long i = 0; i<n; i++)
    {
        // cout << "harsh";
        sum += arr[i] * pow(2,i);
    }
    cout << sum;
    
    delete [] arr;
    //Write your code here
    return 0;
}
