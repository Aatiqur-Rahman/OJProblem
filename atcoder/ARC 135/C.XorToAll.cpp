
#include <bits/stdc++.h>
#define endl '\n'
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ;



	vector < int > bit ( 31 , 0  ); 
	vector <int > v ; 

	int k = INT_MIN ; 
	

	int data_sum  = 0 ; 
	for ( int i = 0 ; i < n ; i ++ ){

		int data ; cin >> data ;

		if ( data > k ) k = data ; 

		data_sum += data  ;
		v.push_back (data) ; 

			for ( int j = 0 ; j < 31 ; j ++ ){
				bit[j] += ( data & 1 ) ? 1 : -1  ; 
				data >>= 1 ;
			}


	}

	int k_bits = 0 ;
	int c_k = k ;
	while ( c_k ) {
		k_bits ++ ;
		c_k >>= 1 ;
	}

	int sum = 0 ;
	for ( int i = k_bits-1 ; i >= 0 ; i -- ){  // O (30)

		cout << bit[i] << " " ;
		if ( bit[i] <= 0  ) {

			sum += ( 1 << i ) ; 

			if ( sum > k ) sum -= ( 1 << i ) ; 
		}

	}
	cout << endl; 
	cout <<sum << endl; 
	
	int res  = 0 ; 

	int limit = v.size() ;

	for ( int i = 0 ; i < limit ; i ++ ){ // O (n) 
		res += ( v[i] ^ sum ) ;

	}
	if (data_sum < res )cout << res << endl; 
	else {
		cout << data_sum << endl; 
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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
