
#include <bits/stdc++.h>
#define int long long 
#define N 1000001
#define mod 1000000007

using namespace std;
vector <int > coins ;

vector < int > dp(N,0) ; 



void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , taka ; cin>> n >> taka ; // number of coins and total taka 
	
	for ( int i = 0 ; i < n ; i++ ) {
		int data; cin >> data;

		coins.push_back(data) ; 

		dp[ data ] =  1 ;

	}

	for ( int i = 0 ; i <= taka ; i++ ) {

		for ( int j =0 ;j < n ; j++ ) {

			int c = i + coins [j] ;

			if (c <= taka ) { 

				dp[c] += dp[i];  
				dp[c] %= mod ;

			}
		}
	}


	cout << dp[taka] << endl;


	
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
