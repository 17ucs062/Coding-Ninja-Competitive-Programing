#include<bits/stdc++.h>
void PairSum(int *input, int n) {	 

    /* Don't write main().
     	* the input array is already passed as function argument.
     	* Don't need to return anything. Print the desired pairs in the function itself.
     	*/
    sort(input,input+n);
    for(int i = 0; i<n; i++)
    {
        for(int j = i;j<n;j++)
        {
            if(input[i]+input[j]!=0)
                continue;
            if(input[i]>input[j])
                cout << input[j] << " " <<  input[i] <<endl;
            else
                cout << input[i] << " " << input[j] << endl;
        }
    }


}

#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PairSum(arr, n);
    return 0;
}
