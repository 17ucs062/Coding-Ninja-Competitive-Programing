#include<math.h>
int turnOffIthBit(int n, int i){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    // int x = pow(2,i);
    // cout << x&(x-1);
    // if(7/pow(2,i))
    // int x = 1;
    // x = x<<i;
    // cout << endl;
    //if(i!=0)
    // int j = 0; 
    // while(1)
    // {
    //     if(n/pow(2,i) < 1)
    //         break;
    //     j++;
    // }
    // if((n & (1 << i) )==0){
    //     return n;
    // }
    if(i<0)
        return n;
    return(n & ~(1 << (i)));
    // return(n&0);
}

#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	int n, i;

	cin >> n >> i;
	
	cout<< turnOffIthBit(n, i) <<endl;
		
	return 0;
}

