#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
	int max = 0;
    for(int i = 0; i<n-1; i++)
        for(int j = i+1; j<n; j++)
        {
            if(max < a[j]-a[i])
            {
                max = a[j]-a[i];
            }
        }
    cout << max;
    // Write your code here
}
