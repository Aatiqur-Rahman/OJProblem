
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	ostream_iterator < int > out ( cout , " ") ;
	int n , x ; cin >>n >> x ;


	vector < int > v (n) ; 

	for ( int i  =0 ; i < n ; i++ ){
		cin >> v[i] ;
	}

	stable_sort ( v.begin() , v.end() )  ; 
	copy ( v.begin() , v.end() , out ); cout << endl; 
	/*int teams= 0 ; 

	int j = 0 ;

	int i = 1 ; 
	while ( j <	 n){
		
		if ( v [j] * i >= x ){
			teams ++ ; 
			i = 1 ;
		}
		else { i ++ ; }

		j++ ; 

	}

	cout << teams << endl; */
	
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
