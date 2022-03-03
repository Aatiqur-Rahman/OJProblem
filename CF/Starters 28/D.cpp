
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n ;


	if ( n <= 2 ){
		cout << -1 << endl; 
	}
	else if ( n & 1 ){
		for ( int i  = 1 ; i <= n ; i ++ ){
			cout << i << " " ;
		}
		cout << endl; 
	}
	else {
		int limit =  n ; 

		while ( n > 4 ){
				cout << n << " " ;
				n-- ; 
		}
		for ( int i = n , j = 1 ; i > j  ; i-- , j ++  ) {
				cout << i << " " << j  << " ";
		} 
		cout << endl; 
	}
	
}

int main(){
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
