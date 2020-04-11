#include<bits/stdc++.h>
using namespace std;
int main() {

    int s,d;
    cin >> s >> d;
    int arr[d];
    memset(arr,0,sizeof(arr));
    arr[0] = 1;
    int i = d-1;
    // int sum = 0;
    // cout << accumulate(arr,arr+d,sum);
    // cout << sum << endl;
    while(1)
    {
        int sum = 0;
       // ;
        if(accumulate(arr,arr+d,sum) == s)
            break;
        if(arr[i] == 8)
            arr[i--]++;
        else
            arr[i]++;        
    }
    for(int i = 0; i<d; i++)
    {
        cout << arr[i];
    }
    
   
    // Write your code here
}
