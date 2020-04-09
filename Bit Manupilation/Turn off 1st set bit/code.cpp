int turnOffFirstSetBit(int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
     if(n==0)
        return n;
    int i = 1;
    // int j = 0;
    while(1)
    {
        int x = n&i;
        if(x>=1)
            return n&~x;
        i =i<<1;
    }
}

#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	int n;

	cin >> n;
	
	cout<< turnOffFirstSetBit(n) <<endl;
		
	return 0;
}

