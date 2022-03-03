
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ;

	vector < int > v (n) ;

	

	for ( int i = 0 ; i < n ; i ++ ){
		cin>> v[i] ;
		
	}
	if (  ( n & 1 ) and n == 1 ) {
		cout<< "YES" << endl; 
	}
	else if (n&1){
		int sum  = v[0] + v[1] ; 
		for ( int i = 2 ; i< n ; i ++){
			sum-= v[i] ;
		}
	}
	else if ( ( n&1 ) == 0 and n == 2 )  {
		if ( abs ( v[0] - v[1] ) == 1 ){cout<< "YES" << endl; }
	}
	else {
		
	}


	cout << (flag ? "YES" : "NO" ) << endl; 
	
}

int main(){
	fasterio();
/*#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif*/

	int c =1;
	//cin >> c ;
	while (c--)solve();

/*#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif*/

	return 0;
}
