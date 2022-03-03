
#include <bits/stdc++.h>
#define N 1000001
#define mod 1000000007

using namespace std;
int dp [N] = {0} ;  

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int dice [] = {1,2,3,4,5,6} ;

	for ( int i= 0 ; i < 6 ; i++ ) {
		int x = dice[i] ; 
		dp [x] =  1 ;
	}

	int n ; cin>> n;

	for ( int i = 0 ; i<=n ; i++ ) {
		 
		for ( int j = 0 ; j < 6; j++ ) {

			int c = i + dice[j] ;

			if ( c <= n ) {
				dp [c] += dp [i] ; 
				dp [c] %= mod ; 
			}
		}
	}
	cout << dp [n] << endl; 

	
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
