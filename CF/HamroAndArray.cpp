
#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , q ; cin >> n >> q ;

	vector < int > p_arr ( n ) ;  
	for ( int i = 0 ; i < n ; i ++ ) {

		int data ; cin >> data  ; 

		if ( i & 1 ) {
			data *= -1 ; 
		}
		if ( i == 0 ) p_arr [i] = data ;
		else {
			p_arr[i] += p_arr [i-1] + data ; 
		}
	}

	for ( auto i : p_arr ) {
		cout  << i << " "; 
	}cout << endl; 

	while ( q -- ) {
		int l , r ;  cin >> l >> r ; 

		int temp  = p_arr[r-1] ; 

		if ( l > 1) temp -= p_arr [ l - 2 ] ; 


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
