int partition(int input[], int s)
{
    int j;
    int flag = 0,k;
    for(int i = 0; i<s; i++)
    {
        if(input[s] < input[i] && flag == 0 )
        {
            j = i;
            flag=1;
        }
        else if(input[s] > input[i] && flag == 1 )
        {
            k = input[i];
            input[i] = input[j];
            input[j] = k;
            //flag == 0;
            j++;
        }
            
    }
    if(flag==1)
    {
        k = input[s];
        input[s] = input[j];
        input[j] = k;
        return j;
    }
    return s;
}
void q_sort(int input[], int s, int e)
{
    if(s<e)
    {
        int mid = partition(input,e);
        q_sort(input,s,mid-1);
        q_sort(input,mid+1,e);
    }
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    q_sort(input,0,size-1);
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
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


