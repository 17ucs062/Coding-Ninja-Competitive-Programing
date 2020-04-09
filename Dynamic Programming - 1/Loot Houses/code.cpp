int getMaxMoney(int arr[], int n){

    /*Write your code here.
	 *Don’t write main(). 
	 *Don’t take input, it is passed as function argument.
	 *Don’t print output.
	 *Taking input and printing output is handled automatically.
         */ 

    int current_sum = arr[0], last_sum = 0, temp_sum = 0, last_element = 0;
    int flag = 0;
    for(int i = 1; i<n; i++)
    {
        // if(flag == 0)
        // {
        //     flag = 1;
        //     continue;
        // }
        if(flag==0)
        {
            // flag = 1;
            temp_sum = arr[i] + last_sum;

        }
        else
        {
            temp_sum = arr[i] + current_sum;
        }
        if(current_sum<temp_sum)
        {
            if(flag==0 && i>0)
                last_element = arr[i-1];
            flag = 0;
            last_sum = current_sum;
            current_sum = temp_sum;
        }
//         else if(i>0)
//         {
//              // cout << "hello" << endl;   
            
//                 temp_sum = arr[i] + current_sum + last_element - arr[i-1];
//                 if(current_sum<temp_sum)
//                 {
//                     if(flag==0 && i>0)
//                         last_element = arr[i-1];
//                     flag = 0;
//                     last_sum = current_sum;
//                     current_sum = temp_sum;
//                 }
                 else
                     flag = 1;

        // }
    }
    return current_sum;
}

#include <iostream>
#include "solution.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMaxMoney(arr, n);
}

