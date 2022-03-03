
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int count ( int n ) {
	
	if ( n <= 9 ) {
		return n ;
	}

	return count ( n/10 ) + ( n%10 ) ; 

}

void solve(){

	int n ; 

	while ( true ) {
		cin >> n ;
		if ( n == 0 ) {
			break ;
		}

		int sum = count ( n  ) ;
		while ( sum >= 10 ) {
			sum = count (sum) ; 
		} 
 		
 		cout << sum << endl; 
		
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
