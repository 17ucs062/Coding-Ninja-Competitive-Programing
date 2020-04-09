#include <cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

bool check( long long a, long long b, long long c ) {
	return a + b < c;
}

int main() {
	long long n, m;
    cin >> n >> m;	
    // scanf( "%d%d", &n, &m );
	long long array[ n ][ m ];
	long long dp[ n ][ m ];
	long long i, j;
	for ( i = 0; i < n; ++i ) {
		for ( j = 0; j < m; ++j ) {
			cin >> array[i][j];
			dp[ i ][ j ] = INF;
		}
	}
	for ( i = 0; i < m; ++i ) {
		dp[ 0 ][ i ] = array[ 0 ][ i ];
	}
	for ( i = 0; i < n - 1; ++i ) {
		for ( j = 0; j < m; ++j ) {
			if ( j - 1 >= 0 && check( dp[ i ][ j ], array[ i + 1 ][ j - 1 ], dp[ i + 1 ][ j - 1 ] ) ) {
				dp[ i + 1 ][ j - 1 ] = dp[ i ][ j ] + array[ i + 1 ][ j - 1 ];
			}
			if ( check( dp[ i ][ j ], array[ i + 1 ][ j ], dp[ i + 1 ][ j ] ) ) {
				dp[ i + 1 ][ j ] = dp[ i ][ j ] + array[ i + 1 ][ j ];
			}
			if ( j + 1 < m && check( dp[ i ][ j ], array[ i + 1 ][ j + 1 ], dp[ i + 1 ][ j + 1 ] ) ) {
				dp[ i + 1 ][ j + 1 ] = dp[ i ][ j ] + array[ i + 1 ][ j + 1 ];
			}
		}
	}
	int min = INF;
	// for(int i = 0; i<n; i++)
	//     {
	//         for(int j = 0; j<m; j++)
	//         cout << dp[i][j] << " ";
	//         cout << endl;
	//     }
	for ( i = 0; i < m; ++i ) {
		if ( dp[ n - 1 ][ i ] < min ) {
			min = dp[ n - 1 ][ i ];
		}
	}
	printf( "%d\n", min );
	return 0;
}
