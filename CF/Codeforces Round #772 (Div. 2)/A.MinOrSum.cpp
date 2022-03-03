
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n;

	vector < bool > bit ( 63 , 0 ) ;

	for ( int i = 0 ; i < n ; i ++ ){
		int data ; cin >> data ; 
		int j = 0 ;

		while (data){

			bit[j] = bit[j] | ( data & 1 ) ; 

			data >>= 1 ;

			j++ ; 

		}
	}
	int sum = 0 ; 
	for ( int i = 0 ; i < bit.size() ; i ++ ){
		if ( bit [i] == 1 ){
			sum += ( 1 << i ) ; 
		}
	}
	cout << sum << endl; 
	
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
