
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int a , b ;
	cin >> a >> b ;

	/*if ( a == b ) {
			cout << "No" << '\n' ;
	}
	else if ( a < b ){

			b -= a ;

			bool flag = true ;  

			for ( int i = a , j =  b ; i <= j ; i ++ , j -- ) {

					if ( (a & b ) == a ) {
						cout << "Yes" << '\n' ; 
						cout << a << " " << b << endl; 
						flag = false ; 
						break ; 
					}
			}
			if ( flag ) cout << "No" << '\n' ; 


	}
	else {

		a -= b ; 

		bool flag = true ; 

		for ( int i = b , j = a ; i >= j ; i-- , j ++ ) {

			if ( ( a & b ) == a and ( a+b ==  b ) ) {

				cout <<  "Yes" << '\n' ;
				cout << a << " " <<  b << endl;
				flag = false ; 
				break ;
			}

		}

		if ( flag ) cout << "No" << endl; 

	} */

	bool flag = false  ; 

	if ( 2 * a <= b ) {
		int differ = b - 2 * a ;
		if ( ( differ & a ) == 0 ){
			flag = true ; 
		}
	}

	cout << ( flag  ? "Yes" : "No" ) << endl; 
	
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
