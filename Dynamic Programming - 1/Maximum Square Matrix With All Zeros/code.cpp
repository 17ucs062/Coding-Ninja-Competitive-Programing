#include<bits/stdc++.h>
int findMaxSquareWithAllZeros(int** arr, int row, int col){

    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    int output[row][col];
    // memset(output,-1,sizeof(int)*row*col);
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(arr[i][j] == 1)
            {
                output[i][j] = 0;
                continue;
            }
            // cout<<"harsh";
            if(i==0)
                output[i][j] = 1;
            else if(j==0)
                output[i][j] = 1;
            else{
                // int count = 0;
                int temp1 = i, temp2 = j;
                // while(output[temp1][temp2]==1 && temp1 >=0 && temp2>=0)
                // {
                //     count++;
                //     temp1--;
                //     temp2--;
                // }
                if(output[i-1][j-1] == 0)
                {
                    output[i][j] = 1;
                    continue;
                }
                int x = output[i-1][j-1];
                output[i][j] = 0;
                int y = 0;
                while(temp2>=j-x)
                {
                    if(arr[i][temp2] == 1)
                    // {
                    //     output[i][j] = 1;
                        break;
                    // }
                    y++;
                    temp2--;
                }
                // if(output[i][j] == 0)
                // {
                int z = 0;
                while(temp1>=i-x)
                {
                    if(arr[temp1][j] == 1)
                    // {
                    //     output[i][j] = 1;
                        break;
                    // }
                    z++;
                    temp1--;
                }
                // }
                if(x == y && x == z)
                    output[i][j] = 1 + output[i-1][j-1];
                else if(y < z)
                    output[i][j] = y;
                else
                    output[i][j] = z;
            }
        }
    }
    int max = output[0][0];
    for(int i = 0; i<row; i++)
        for(int j = 0; j<col; j++)
        {
            if(max < output[i][j])
                max = output[i][j];
        }
    return max;
}

#include<iostream>
#include"solution.h"
using namespace std;
int main()
 {
  int **arr,n,m,i,j;
  cin>>n>>m;
  arr=new int*[n];
  for(i=0;i<n;i++)
      {
       arr[i]=new int[m];
      }
  for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
	    {
	     cin>>arr[i][j];
	    }
     }
  cout << findMaxSquareWithAllZeros(arr,n,m) << endl;
  delete arr;
  return 0;
}
