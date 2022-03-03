
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , k ; 
	cin >> n >> k ;

	vector <int > v ;
	vector <int > bit ;

	for ( int i = 0 ; i < n ; i++ ) {
		int data ; cin >> data ;
		v.push_back (data) ; 
	}

	for ( int i = 0 ; i < k ; i++ ) {


		int cnt_1 = 0 ;
		int cnt_0 = 0 ;

		for ( int j = 0 ; j < n ; j ++ ) {
			int temp = ( v[j] & ( 1 << i ) ) ;

			// cout << "bit_number : " << i << "  " << temp  << endl; 

			if (temp) cnt_1++ ;
			else { cnt_0 ++ ; }	
		}
		if (cnt_1 > cnt_0  )
			bit.push_back(1) ; 
		else {
			bit.push_back(0) ; 
		}
	}

	int value = 0 ;
	for ( int i = 0 ; i < bit.size() ; i ++ ) {
		if ( bit[i] == 1 ) {
			value += (1 << i) ;
		}
	}
	cout << value << endl; 

	
}

int main(){
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
