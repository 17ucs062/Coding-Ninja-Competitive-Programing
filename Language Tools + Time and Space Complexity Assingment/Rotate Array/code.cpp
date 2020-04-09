// arr - input array
// size - size of array
// d - array to be rotated by d elements

void Rotate(int arr[], int d, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing the output is handled automatically.
     */
    int s;

//     for(int i =d ; i<size-1; i++)
//     {
//         if(i>=d)
//         {
//             s = arr[i];
//             arr[i] = arr[i-d];
//             arr[i-d] = s;
//         }
//     }
//     for(int i = size - d; i<size-1; i++)
//     {
//         s = arr[size-1];
//         arr[size-d-1] = s;
//     }
    while(d--)
    {
        s = arr[0];
        for(int i = 0; i<size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[size-1] = s;
    }

}
#include <iostream>
#include "solution.h"
using namespace std;

int main() {

	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;
    
    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}
