
#include <bits/stdc++.h>
#define int long long

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string n ; cin >> n; 

	int ans = 0 ; 

	sort ( n .begin() , n .end () ) ;

	do {
		string l = "" ; 

  		for (int i = 0 ; i < n.size () ; i ++ ){	

  			l += n[i] ;

  			string r = "" ;

			for ( int j = i+1 ; j < n.size() ; j ++ ){

				r += n[j]; 

			}

			if ( l == "" or r == "") continue ; 
			
			ans = max ( ans , stoll (l) * stoll (r) ) ;
			
		}


	}
	while ( next_permutation ( n.begin () , n.end() ) ) ; 

	cout << ans << endl; 
	
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
