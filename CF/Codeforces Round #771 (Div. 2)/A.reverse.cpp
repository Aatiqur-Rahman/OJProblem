
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n ; cin >> n; 

	vector < int > v(n) ;

	int mark = -1 ; 
	int idx  = -1 ;

	for ( int i = 0 ; i < n ; i++ ) {

		cin >> v [i] ; 

		if ( mark == -1 and v [i] != ( i+1 )  ) mark =  i+1 ;
		if ( idx ==  -1 and v[i] == mark )idx=i ; 
	}

	if ( mark == -1 ) {
		for ( auto i : v ) {
			cout << i <<  " " ;
		}
		cout << endl; 
	}
	else {
		int i ;
		for ( i= 0 ; i < n ; i++ ) {
			if ( v[i] == i+1 ) cout << v[i] << " " ; 
			else break;
		}

		for ( int j = idx ; j >= i  ; j -- ){
			cout << v[j] << " " ; 
		}
		for ( int j = idx+1 ; j < n ; j ++ ){
			cout << v[j] <<  " " ; 
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
