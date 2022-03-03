
#include <bits/stdc++.h>
#define endl '\n' 
#define N 100001

using namespace std;
int dp [N] ;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int LDS ( vector <int > & v ) {

	for ( int i = 0 ; i < v.size() ; i ++ ) {

		dp[i] = 1 ; 

		if ( i == 0 ) continue ; 

		for ( int j = 0 ; j < i ; j ++ ){

			if ( v[j] > v[i] ) {

				dp [i] = dp[j] + 1 ;

			}
		}
	}
	

}

void solve(){

	int n ;cin >> n ;

	vector < int > v (n) ;

	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> v [i] ; 
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
