
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

void solve(){

	char s[1001][1001] ;

	int n ; cin >> n;

	for ( int i = 0 ; i < n ; i ++ ){
		for ( int j = 0 ; j < n ; j ++ ) {

			cin >> s[i][j]  ;

		}
	}
    bool ans = false ; 

	for ( int i = 0  ; i < n ; i ++ ){

		for ( int j = 0 ; j < n ; j++ ) {

				if ( j + 5 < n  and ans == false ) { 

					int cnt = 0 ; 

					for ( int k = 0 ; k <= 5 ; k ++  ){
						if ( s[ i ][ j+k ] == '#' ){
							cnt ++ ; 
						}
					}
					if (cnt >= 4 ) ans = true  ; 
				}

				if ( i +5 < n and ans == false ) {


					int cnt = 0 ; 

					for ( int k = 0 ; k <= 5 ; k ++  ){
						if ( s[ i+k ][ j ] == '#' ){
							cnt ++ ; 
						}
					}
					if (cnt >= 4 ) ans = true  ; 
				}

				if ( ( i+5 < n and j+5 < n )  and ans == false ){

					int cnt = 0 ; 

					for ( int k = 0 ; k <= 5 ; k ++  ){
						if ( s [ i+k ][ j+k ] == '#' ){
							cnt ++ ; 
						}
					}
					if (cnt >=4 ) ans = true  ; 

				} 

				if ( ( i - 5 >= 0 and j+5 < n ) and ans == false  ) {

					int cnt  = 0 ; 

					for ( int k = 0 ; k <= 5 ; k ++ ){
		
						if ( s[ i-k ][ j+k ] == '#' ) cnt ++ ; 
		 
					}

					if (cnt >=4 ) ans = true  ; 
				}

				
			}

		}

	cout << ( ans ? "Yes" : "No" ) << endl; 

}

int main(){
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
