
#include <bits/stdc++.h>
#define N 100005
#define endl '\n'
#define fast_io ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
vector < int > v [N+1] ; 
int dp [N][(1<<3)] ;


int dfs ( int s, int mask , int n   ) {

	// base case

	if ( s == n ) {
		return 0 ;
	}

	if ( dp [s][mask] != -1 ) {

		cout << "returned : " << dp [s][mask] << endl ;
		return dp[s][mask] ;
	}

	int sum = 0 ;
	int j = 0 ;

	int temp_mask = mask ; 
	
	for ( auto i : v[s] ) {

		if ( mask & ( 1<<j ) ){

			sum = max (sum , i + dfs ( s+1 ,  mask ^ ( 1 << j )  , n )  )  ;
			cout << "mask : " <<  mask << endl; 

			cout << "sum : " <<  sum << endl ;
			cout << "bit position : " << j << endl ;
		}
		j++ ;

	}
	return dp [s][mask] = sum ;

}

void solve(){
	int n ;
	cin >> n ; 

	for ( int i = 0 ; i < n ; i ++ ) {
		int a , b , c ; cin >> a >> b >> c  ; 

		v[i] .push_back (a) ;
		v[i] .push_back (b) ;
		v[i] .push_back (c) ;

	}
	memset ( dp , - 1 , sizeof ( dp )) ; 
	
	cout << dfs ( 0 , (1 << 3) - 1 , n ) << endl; 

	
	for ( int i = 0 ; i <  n ; i ++ ){
		for ( int j  = 0 ; j < (1 << 3) ; j ++ ) {
			cout << dp[i][j] << "  ";  
		}
		cout<< endl;
	}
	


}

int main(){

	fast_io ; 

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
