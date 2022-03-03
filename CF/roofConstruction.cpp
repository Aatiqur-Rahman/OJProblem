
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ; 



	int cn = n-1 ;

	int cnt = 0 ;

	while (cn ) {

		cn = cn >> 1 ; 
		cnt++;

	}

	// maximum possible value of 2 to the power given range 
	// print value-1 to 1 , print 0 and value , print value+1 to n-1  

	int value  = 1 << (cnt-1) ; // maximum possible value 

	for ( int i = 1 ; i < value ; i++ ){

		cout << i << " " ; 

	}

	cout << "0" << " " << value << " " ; 

	for ( int i = value +1 ; i <=n-1 ; i++) {
			cout << i << " " ; 
	}

	//if ( value +1 == n-1 ) cout<< value+1;
	cout << endl; 

	
	//if ( value+1 != n )cout << ( value + n ) / 2 << '\n'; 
	//else {cout << '\n' ;}

	
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
