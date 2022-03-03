
#include <bits/stdc++.h>
#define int long long
using namespace std;

vector < char > vc ; // character array 

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ; // nth smallest integer 

	int cn =  n ;


	vc.clear() ; 
	while  ( cn > 0) {

		if ( cn & 1 ){

			vc.push_back( '2' ) ; 

		}

		else {

			vc.push_back( '0' ) ;

		}

		cn = cn >> 1 ;
	}

	 reverse ( vc.begin () , vc.end () ) ; 
	bool flag = false  ; 
	int j = 0; 
	for ( int i = 0 ; i < vc.size() ; i++  ) {

		if ( vc [i] == '0' && i==j){
			j++ ; 
			
		}
		else {
			cout << vc[i] ; 
		}
		
	}

	cout << endl; 
	
}

int32_t main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	// cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
