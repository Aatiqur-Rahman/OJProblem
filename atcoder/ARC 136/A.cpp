
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	vector <char> c ;

	int n; cin >> n; 


	for ( int i = 0  ; i < n ;  i++ ){
		char data ; cin >> data ;

		c.push_back (data) ;
	}
	for ( int i = 0 ; i < n ; i ++ ){
		if( c[i] != 'C'){
			if ( c[i] == 'B' and c[i+1] == 'A' and i != n ){
				
				c[i] = 'A' , c[i+1] = 'B' ;
				cout << c[i] ;

			}
			else if ( c[i] == 'B' and c[i+1] == 'B' and i != n ){
				c[i] = 'A' ; 
				cout << c[i] ; 
				i++ ; 
			}

			else {
				cout << c[i] ;
			}
		}
		else {
			cout << c[i] ;
		}
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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
