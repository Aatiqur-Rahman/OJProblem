
#include <bits/stdc++.h>
#define int long long 
#define mod 1000000007

using namespace std;

int64_t Pow ( int64_t x , int64_t p , int64_t MOD ) {
	if ( p == 0) return 1 ; 
	if ( p&1 ) {
		return ( x * Pow ( x , p - 1 , MOD  ) ) % MOD ; 
	}
	int half = Pow ( x , p / 2 , MOD ) ; 
	return ( half * half ) % MOD; 

}

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n , k ; cin  >> n  >> k ; 
	vector < int > bit ; 
	while ( k ) {
		bit.push_back ( k & 1 ) ; 
		k >>= 1;
	} 

	int sum  = 0 ; 

	for ( int i = 0 ; i < bit.size() ; i++ ) {
		if ( bit [i] == 1 ) {
			int  temp  = 0; 

			if ( i == 0 ) temp = 1 ; 
			else { temp = Pow ( n , i , mod ) ; } 
			//temp %= mod ; 

			//cout << temp << endl; 

			sum += temp ;

			sum %= mod ;  
		}
	}
	cout << sum << "\n" ; 

}

int32_t main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
