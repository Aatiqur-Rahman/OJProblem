
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , m ; cin >> n >> m ;


	vector <int > noodle ( n ) ; 

	for ( int i = 0 ; i < n ; i++ ){

		cin >> noodle [i] ;

	}

	sort ( noodle .begin () , noodle.end() ) ; 
	vector < int > meal (m) ;  

	 bool flag = true ;

	for ( int i = 0 ; i < m ; i++  ) {

		int data ; cin >> data ;

		auto ans =  upper_bound ( noodle.begin () , noodle.end() , data) ; 
		int idx = ans - noodle.begin() ; idx -= 1 ; 

		if ( noodle[idx] != data ) flag= false ;
		else {

			noodle.erase ( noodle.begin() + idx ) ;

		}

	}

	cout << (flag ? "Yes" : "No" ) << endl; 



		
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
