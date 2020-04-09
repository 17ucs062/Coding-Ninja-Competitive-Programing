#include<bits/stdc++.h>
int sol[20][20];

void mazeSolver(int maze[][20], int n, int r, int c)
{
    if(r == n-1 && c == n-1 )
    {
        sol[n-1][n-1] = 1;
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
            {
                cout << sol[i][j] << " ";
                // sol[i][j] = 0;
            }
        cout << endl;
        // memset(sol, 0, 20*20*sizeof(int));
        return;
    }
    
    if(r>=n||c>=n||r<0||c<0 || sol[r][c] == 1 || maze[r][c] == 0)
        return;
    
    sol[r][c] = 1;
    mazeSolver(maze,n,r,c+1);
    // 
    // sol[r][c] = 1;
    mazeSolver(maze,n,r,c-1);

    // sol[r][c] = 1;
    mazeSolver(maze,n,r+1,c);

    // sol[r][c] = 1;
    mazeSolver(maze,n,r-1,c);
    sol[r][c] = 0;
    // sol[r][c] = 1;
    // mazeSolver(maze,n,)

    // mazeSolver(maze,n,r+1,c);

    // else if(maze[r+1][c-1])
    //     mazeSolver(maze,n,r+1,c-1);
    // else
    // {
    //     sol[r][c-1] = 0;
    //     mazeSolver(maze,n,r+1,c-1);
    // }

    //     if(maze[r][c] && r<n && c<n )
    //     {    
    //         sol[r][c] = 1;

    //     }
    //     else
    //         mazeSolver(maze,n,r-1,c+1);


   // return;
}

void ratInAMaze(int maze[][20], int n){

    /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
    memset(sol, 0, 20*20*sizeof(int));
    mazeSolver(maze,n,0,0);

}

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}


