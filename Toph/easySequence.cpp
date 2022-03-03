
#include <bits/stdc++.h>
#define int long long 
#define N 100000

using namespace std;
int dp[N] ; 

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int sequence ( int n ) {

	

	if ( n == 1 ) return dp[1] = 1  ; 

	if ( dp[n] != 0 ) return dp[n] ;  

	if ( n%2 == 0 ) {

		n /= 2 ; 

		int ans = sequence ( n ) ;
		
		return dp [n*2] = ans*ans + 1 ; 
	}

	n /= 2; 

	int ans = sequence ( n ) ; 
	
	return dp [n*2+1] = ans * sequence ( n+1 ) + 2 ; 


	
}

void solve( int c ){

	int n ; cin >> n ;
	

	int i =1 ; 

	while (sequence(i) < n ){
		i++ ; 
	}


	cout << "Case " << c << ": " << find ( dp , dp+i ,  n ) - dp << endl; 

}

int32_t main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	int i = 1 ; 
	cin >> c ;
	while (c--){
		solve(i);
		i++ ; 

	}

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
