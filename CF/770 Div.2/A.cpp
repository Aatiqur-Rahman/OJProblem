
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void rev (string& x) {
	 reverse ( x.begin() , x.end() ) ;
}



bool ispalindrome ( string x ) {

	for ( int i = 0 , j = x.size()-1 ; i < j ; i++ , j --  ) {

		if ( x [i] != x [j] ){
			return false ;
		}

	}
	return true ; 

}

void solve(){

	int n , k ; cin >> n >> k ;

	string str ; cin >> str ; 

	if ( ispalindrome (str) ) cout << "1" << endl; 
	else {

		if ( k == 0 ) cout << "1" << endl; 
		else { cout << "2" << endl;  } 
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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
