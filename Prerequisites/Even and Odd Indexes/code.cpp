#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, odd_sum = 0, even_sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        //cout << "the" << i << "is: " << a[i] << endl;
        if(i%2 == 0 && a[i]%2 == 0)
        {
            even_sum = even_sum + a[i];
         //   cout << "harsh";
        }
        else if(i%2 != 0 && a[i]%2 != 0)
            odd_sum = odd_sum + a[i];
    
    }
    cout << even_sum << " " << odd_sum;
	return 0;
}
