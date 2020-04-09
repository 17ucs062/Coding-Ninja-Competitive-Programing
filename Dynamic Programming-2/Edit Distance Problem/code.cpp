#include<iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    int m = s1.size();
	int n = s2.size();
    int count = 0;
	int** dp = new int*[m + 1];
	for (int i = 0; i <= m; i++) {
		dp[i] = new int[n + 1];
	}
	for (int i = 0; i <= m; i++) {
		dp[i][0] = i;
	}
	for (int i = 0; i <=n ;i++) {
		dp[0][i] = i;
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j<= n; j++) {
			if (s1[m - i] == s2[n - j]) {
				dp[i][j] = dp[i - 1][j - 1];
			}	else {
                // count ++;
				dp[i][j] = min(1 + dp[i - 1][j],min(1 + dp[i][j - 1], 1 + dp[i-1][j-1]));
			}
		}
	}
// return count;
	int ans =  dp[m][n];
	// delete 2d array
	for (int i =0; i <=  m; i++) {
		delete [] dp[i];
	}
	delete [] dp;
    // int p = m + n - 2*ans - abs(m-ans-(n-ans));
    // int z = max(m,n);
    // int p = min(m,n) - ans;
	return ans ;
    
}
#include "Solution.h"

int main(){

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << editDistance(s1,s2) << endl;

}


