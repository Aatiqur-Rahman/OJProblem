
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n ; cin >> n; 

	vector <bool> pi ( 360 , false );
	pi[0]= true ; 

	int degree = 0 ;

	for ( int i = 0 ; i < n ; i++ ) {
		int data ; cin >> data ;

		degree += data; 

		if (degree > 359 ) {
			degree %= 360 ; 
		}

		pi [degree] = true ;

	}
	int m = INT_MIN ; 
	int cnt  ; 
	for ( int i = 0 ; i< pi.size() ; i++  ) {

		if ( pi [i] == true ){

			cnt = 0 ; 
			
		}
		cnt ++ ; 

		m = max ( m , cnt ) ; 

	}

	cout << m << endl; 


	
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

