
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ; 

	vector < int > a (n) , b (n) ;

	for ( int i = 0 ; i < n ; i ++ ){
		cin >> a [i] ;
	} 
	sort ( a.begin () , a.end () ) ; // nlogn

	bool flag = true ; 

	for ( int i = 0 ; i < n ; i ++ ){
		cin >> b [i] ;

		auto j  = upper_bound( a.begin () , a.end() , b[i] ) ;
		int idx = j - a.begin() ; idx -= 1; 

		if ( a[idx] != b[i] ) {
			flag = false ; 
		}
		else {
			a.erase ( a.begin() + idx  ) ; 
		}
	} 


	cout << ( flag ? "Yes" : "No" ) << endl; 



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
