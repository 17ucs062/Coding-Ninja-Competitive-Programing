// arr - input array
// size - size of array
#include<map>
int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */  
    map<int,int> m;
    int i = 0;
    for(i = 0; i<size; i++)
    {
        if(m[arr[i]] != 0)
            break;
        m[arr[i]] = 1;
    }
    return arr[i];

}
#include <iostream>
using namespace std;
#include "solution.h"

int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << MissingNumber(input, size);	
	
	delete [] input;

	return 0;
}
