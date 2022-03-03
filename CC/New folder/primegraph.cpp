
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
bool isprime ( int n) {

	for ( int i= 2 ; i<= sqrt (n) ; i++ ) {
		if (n%i == 0 ) {
			return false ;
		}
	}
	return true; 

}

void solve(){

	int n ; // number of nodes ; 
	cin>> n ;

	int cn = n-1 ;

	while ( ! isprime( cn ) ) {
		cn-- ; 
	}

	if ( n&1){
		int sum = ( ( n-1 ) * cn ) / 2 + 1 ; 

		cout << sum  << endl; 
	}else {
		int sum =  n *  cn  / 2 ; 

		cout << sum  << endl; 
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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
