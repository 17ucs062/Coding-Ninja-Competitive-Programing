int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    int flag = -1;
    if(size-1>0)
        flag = firstIndex(input,size-1,x);
    if(input[size-1] == x && flag == -1)
        return size - 1;
    else if(flag != -1)
       return flag;
    else 
        return -1;
    
}
#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}


