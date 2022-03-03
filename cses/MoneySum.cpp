
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void calculate (std::vector< int> &coins , int  n , int W ) {

	vector < bool> mark ( W , false  ) ; 
 
	for ( int i = 0 ; i < n ; i ++ ) {
		for ( int j = 1 ; j < W ; j ++ ) {
			if ( j - coins [i] >= 0 ) {	
				mark [j] = true  ; 
			}	
		}
	}

}

void solve(){

	int n; cin >> n ;

	vector < int > coins (n) ; 
	int total_taka =  0 
	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> coins [i] ; 
		total_taka += coins[i] ; 

	}

	calculate ( coins , n , total_taka  ) ;
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
