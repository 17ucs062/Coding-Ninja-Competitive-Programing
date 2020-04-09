long staircase(int n){
    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    long *output = new long[n];
    output[0] = 1;
    output[1] = 1;
    output[2] = 2;
    output[3] = 4;
    for(long long i = 4; i<=n; i++)
    {
        output[i] = output[i-1] + output[i-2] + output[i-3];  
    }
    return output[n];
}

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  cout << staircase(n) << endl;

}


