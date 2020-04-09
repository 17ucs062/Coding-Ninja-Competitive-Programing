#include<bits/stdc++.h>
using namespace std;
int getMin(int *arr, int n){
    /* Don't write main().
      Don't read input, it is passed as function argument.
      Return output and don't print it.
      Taking input and printing output is handled automatically.
   */
    // sort(arr,arr+n);
    // for(int i = 0; i<n; i++)
    //     cout << arr[i] << endl; 
    int choclates[n];
    memset(choclates,0,sizeof(int)*n);
    choclates[0] = 1;
    int sum = 1, in = 0;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] == arr[i-1] && choclates[i-1]>1)
        {
            choclates[i] = choclates[i-1]-1;
            sum = sum + choclates[i];
        }
        else if(arr[i] == arr[i-1] && choclates[i-1] == 1)
        {
            choclates[i] = 1;
            sum = sum + choclates[i];
        }
        else if(arr[i] < arr[i-1] && choclates[i-1] > 1)
        {
            choclates[i] = 1;
            sum = sum + choclates[i];
        }
        else if(arr[i] < arr[i-1] && choclates[i-1] == 1)
        {
            int k = i-1;
            while(arr[i] < arr[i-1] && i<n)
            {
                i++;
                in++;
            }
            i--;
            // cout << in+1 << " " << choclates[k-1] << endl;
            if(((k-1>0) && (in+1)<=(choclates[k-1]-1))|| k-1<0)
            {
                // cout << "hello "<< endl;
                choclates[i] = choclates[k];
                sum = sum - 1 + (in+1)*(1+in+1)/2;
            }//
            else
            {
                choclates[i] = choclates[k];
                sum = sum -1 + (in+1)*(1+in+1)/2  + ( (in+1) - choclates[k-1] + 1);
            }
            in = 0;
             // cout << sum << endl;
        }
        else
        {
            choclates[i] = 1 + choclates[i-1];
            sum = sum + choclates[i];
        }
         // cout << sum << endl;
    }
    // int initial_sum  = 0;  
    return sum; 
    // return accumulate(n)

}

#include <iostream>
#include <stdio.h>
#include "solution.h"
using namespace std;

int main(){

    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << getMin(arr, n);
    delete []arr;
}
