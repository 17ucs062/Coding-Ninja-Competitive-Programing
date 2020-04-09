#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        long x, sum = 0;
        cin >> x;
        while(x!=0)
        {
            int j = x%10;
            sum = sum + j;
            x = x/10;
        }
        cout << sum << endl;
    }

	// Write your code here
}
