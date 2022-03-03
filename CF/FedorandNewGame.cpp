
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , m , k ; cin >> n >> m >> k ;
	// numner of bits , players , maximum differ 

	vector <int > v ;  

	for ( int i = 0 ; i <= m ; i ++  ) {
		int data ; cin >> data ; 

		v.push_back (data) ;

	}
	int value = v [v.size()-1 ] ; 

	int number_of_friends = 0 ; 

	for ( int i = v.size()-2 ; i >= 0 ; i -- ) {

		int temp = ( v[i] ^ value ) ;

		if ( __builtin_popcount ( temp ) <= k  ) number_of_friends ++ ; 
	}
	cout << number_of_friends << endl; 
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
