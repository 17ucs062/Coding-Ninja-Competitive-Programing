#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin>> a[i];
    
    int sum;
    for(int i = 0; i<n/2; i++)
    { 
        sum = a[i] + a[n-i-1];
        cout << sum/10 << " " << sum%10 << endl;
    }
	return 0;
}
