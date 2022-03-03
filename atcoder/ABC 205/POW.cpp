
#include <bits/stdc++.h>
#define mod 1000000007
#define int long long 

using namespace std;

int64_t POW ( int64_t x , int64_t p , int64_t MOD ) {
	if ( p == 0) return 1 ; 
	if ( p&1 ) {
		return ( x * POW ( x , p - 1 , MOD ) ) % MOD ; 
	}
	int half = POW ( x , p / 2 , MOD ) ; 
	return ( half * half ) % MOD; 

}

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	// a c and b c 
	int a , b , c ; 

	cin >> a >> b >> c  ; 

	cout << POW ( a , c , mod ) << endl; 
	cout << POW ( b , c , mod ) << endl; 

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
