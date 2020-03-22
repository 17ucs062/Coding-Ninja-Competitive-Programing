#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n][n];
    
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
        {
            cin >> a[i][j];
            if(i == 0 || i == n-1)
                sum = sum + a[i][j];
            else if(i!=0 && i!=n-1 && (j==0 || j == n-1))
                sum = sum + a[i][j];
            else if(i!=0 && i!=n-1 && j!=0 && j!=n-1 && (i+j == n-1 || i==j) )
                sum = sum + a[i][j];
        }
    cout << sum ;
	return 0;
}
