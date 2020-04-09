#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i<n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] - (i + 1) > 2) {
            cout << "NO" << endl;
            return 0;
        }
        for (int j = max(0, arr[i] - 2); j < i; j++)
            if (arr[j] > arr[i]) ans++;
    }
    cout << "YES" << endl << ans << endl;

	// Write your code here
}
