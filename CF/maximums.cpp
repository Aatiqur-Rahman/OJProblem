
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ;

	vector < int > v ;

	for ( int i = 0 ; i < n ; i ++ ) {
		int data ; cin >> data ;

		v.push_back ( data ) ; 
	}

	int x = INT_MIN ;

	vector < int > a ;

	a.push_back ( v[0] ) ;

	for ( int i = 1 ; i < n ; i ++  ) {

		x = max ( a [ i -1 ] , x ) ; 

		int temp  = v[i] + x ;

		a.push_back ( temp ) ; 

	}

	ostream_iterator < int > o (cout , " " ) ; 
	copy ( a.begin () , a.end() , o ) ; 
	//cout << endl; 
	
}

int32_t main(){
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
