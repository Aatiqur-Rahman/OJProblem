
#include <bits/stdc++.h>
#define endl '\n'
#define N 1000000


using namespace std;
vector <int> dp(N,0) ; 

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int m = INT_MIN ; 

int count ( vector <int> & v  , int k )  {
	if ( k == 1 ) return 1 ;

	int m = INT_MIN ; 
	
	 for ( int i = 0 ; i < k ; i++ ) {

	 	dp[i] =1 ;

	 	if ( i == 0 ) continue  ;

	 	if ( v[i] > v[i-1]){
	 		dp[i] = dp[i-1] + 1 ; 
	 	}

	 	 
	 	
	 	/*for ( int j = 0 ; j < i ; j ++  ){
	 		if ( v[j] < v[i]){
	 			dp [i] = max( dp[i] , dp[j]+1 ) ; 
	 		}
	 		if ( dp[i] > m ) m = dp[i] ;  
	 	}*/
	 }

	return  dp[k-1] ;  
}

void solve(){

	int n; cin >> n ;

	vector <int> v(n) ;

	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> v[i] ; 
	}

	cout << count ( v , n ) << endl ;

	for ( int i = 0 ; i < n ; i++ ){
		cout<< dp[i] << " " ;
	}
	cout << endl; 

	
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
