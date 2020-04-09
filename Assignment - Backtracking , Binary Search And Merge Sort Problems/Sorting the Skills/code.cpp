#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n, int s, int e)
{
    if(e>=n)
        return;
    else
    {
        if(arr[s] > arr[e])
        {
            int sw = arr[s];
            arr[s] = arr[e];
            arr[e] = sw;
        }
        sort(arr,n,e,e+1);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i = 0; i<n; i++)
            cin >> arr[i];
        
        sort(arr,n,0,1);
        
        // for(int i = 0; i<n; i++)
        //     cout << arr[i];
        
        int a = 0;
        for(int i = 1; i<n; i++)
        {
            // cout << arr[i] << " ";
            if(arr[i-1] > arr[i])
            {
                a = 1;
                break;
            }
        }
        // cout << endl;
        if(a==0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
        delete [] arr;
    }
    return 0;
}
