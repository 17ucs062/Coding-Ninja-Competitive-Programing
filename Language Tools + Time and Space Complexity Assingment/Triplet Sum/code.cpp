
// arr - input array
// size - size of array
// x - sum of triplets
#include<bits/stdc++.h>
void FindTriplet(int arr[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    sort(arr,arr+size);
    for(int i = 0; i<size; i++)
        for(int j = i;j<size; j++)
        {
            if(i==j)
                continue;
            for(int k = j; k<size; k++)
            {
                if(k==j | k == i)
                    continue;
                if(x == arr[i]+arr[j]+arr[k])
                {
                    if(arr[i]>arr[j])
                    {
                        if(arr[i]>arr[k])
                        {
                            if(arr[j]>arr[k])
                                cout << arr[k] << " "<< arr[j] <<" "<< arr[i]<<endl;
                            else
                                cout << arr[j]<< " " << arr[k] << " "<< arr[i]<<endl;
                            }
                        else
                            cout << arr[j]<< " " << arr[i] << " "<< arr[k]<<endl;   
                    }
                    else
                    {
                        if(arr[j]>arr[k])
                        {
                            if(arr[i]>arr[k])
                                cout << arr[k]<< " " << arr[i]<< " " << arr[j]<<endl;
                            else
                                cout << arr[k]<< " " << arr[i]<< " " << arr[j]<<endl;
                        }
                        else
                            cout << arr[i]<< " " << arr[j]<< " " << arr[k]<<endl;    
                    }
                }
            }                
        }

}

#include <iostream>
using namespace std;
#include "solution.h"

int main() {

	int size;

	int x;
	cin>>size;
	
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>x;

	FindTriplet(input,size,x);
		
	return 0;
}

