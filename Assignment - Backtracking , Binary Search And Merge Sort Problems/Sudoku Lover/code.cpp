int check(int board[9][9], int r, int c, int x)
{
    //row
    for(int i =0; i<9; i++)
    {
        if(i==c)
            continue;
        if(board[r][i] == x)
            return 0;
    }
    //col
    for(int i =0; i<9; i++)
    {
        if(i==r)
            continue;
        if(board[i][c] == x)
            return 0;
    }
    //box
    for(int i = r-(r%3); i<=(r-(r%3))+2; i++)
        for(int j = c-(c%3); j<=(c-(c%3))+2; j++)
        {
            if(i == r && j == c)
                continue;
            if(board[i][j]==x)
                return 0;
        }
    return 1;
}

int empty(int board[9][9],int &r, int &c)
{
    for(int i = 0; i<9; i++)
        for(int j = 0; j<9; j++)
        {
            if(board[i][j] == 0)
            {
                r = i;
                c = j;
                return 1;
            }
        }
    return 0;
}
bool sudokuSolver(int board[][9]){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
    int r = 0, c = 0;
    if(!empty(board,r,c))
        return true;
    for(int i = 1; i<=9; i++)
    {
        if(check(board,r,c,i))
        {
            // if(r==0 && c == 1)
            //     cout << i << endl;
            board[r][c] = i;
            bool chk = sudokuSolver(board);
            if(chk == false)
                board[r][c] = 0;
            else
                return true;
        }
    }
    return false;
    

}

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n = 9; 
  int board[9][9];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> board[i][j];
        }		
  }
  if(sudokuSolver(board)){
	cout << "true";	
  }else{
	cout << "false";	
  }
}


