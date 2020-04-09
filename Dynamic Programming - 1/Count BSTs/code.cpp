#include<bits/stdc++.h>
long long nBST(long long out[], int n)
{
    if(n==0)
    {
        out[n] = 1;
        return 1;
    }
    if(n==1)
    {
        out[n] = 1;
        return 1;
    }
    if(out[n] != -1)
        return out[n];
    long long sum = 0, x = pow(10,9)+7;
    for(int i = 1; i<=n; i++)
        sum = (sum + nBST(out,i-1)*nBST(out,n-i))%x;
    out[n] = sum;
    return out[n];
    
}
int countBST( int n)
{
  /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    long long *out = new long long[n+1];
    memset(out,-1,sizeof(long long)*(n+1));
    // cout << out[1] << endl;
    long long sum;
    // for(int i = 1; i<n; i++)
    // {
    //     sum = sum + nBST(out,i-1) + nBST(out,n-i);
    // }
    // cout << 5%2;
    long long x = pow(10,9)+7;
    // cout << x << endl;
    sum = nBST(out,n);
    // cout << sum << endl;
    delete [] out;
    int ans = sum%x;
    // cout << ans << endl;
    return ans;
}


#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#include "solution.h"




int main()
{
	int n ;
	cin>>n;
	cout<<countBST(n);
	return 0;
}
