
#include <bits/stdc++.h>
#define N 1001
#define mod 1000000007
#define int long long

using namespace std;

char grid [N][N] ;
int dp [N][N] ;   

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

// -1 -1 -1 -1
// -1  0 -1 -1
// -1 -1 -1  0 
//  0 -1 -1 -1

int calculate ( int x , int y  ) {

	// base case 

	if ( x == 0 or y == 0  ){ // 1 based index 
		return 0 ; 
	}
	if ( x == 1 or y == 1) {
		return 1 ;
	}


	// rec case 

	if ( dp [x][y] != -1 ) {
		return dp [x][y] ; 
	}

	

	 return dp[x][y] = calculate (x,y-1) % mod   + calculate (x-1,y) % mod   ; 



}

void solve(){

	int n ; cin >> n; // number of grids 

	memset (dp , -1 , sizeof ( dp )) ;

	for ( int i = 1 ; i <= n ; i ++ ){
		for ( int j = 1 ; j <= n  ; j ++ ) {

			cin >> grid[i][j] ; 

			if ( grid [i][j] == '*') {
				dp[i][j] = 0 ; 

			}

		}
	} 


	

	cout << calculate ( n , n  ) % mod  << endl; 

	 for ( int i =1 ; i <= n ; i ++ ){
		for  ( int j  = 1 ; j <= n ; j ++ ) { 
			cout << dp [i][j] << " ";
		}	
		cout << endl ;
	}
	
}

int32_t main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
