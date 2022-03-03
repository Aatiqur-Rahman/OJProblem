
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , k , x ; cin >> n >> k >> x ;
	//vector < int > v ;
	int ans  = 0 ; 

	int max_value = INT_MIN ; 

	for ( int i = 0 ; i < n ; i++ ) {

		int data; cin >> data; 

		if ( max_value < data ) 
			{	
				if ( i != 0) ans |= max_value ; 
				max_value = data ; 
			}



		else {
			ans |= data ;
		}

		//v.push_back (data) ; 

	}
	while ( k -- ) {
		max_value *= x ;
	}
	ans |= max_value ; 
	cout << ans << endl; 
	/*sort ( v.begin () , v.end () ); // n*logn

	while ( k -- ) { // 10 
		v[v.size() -1 ] *= x ;
	}

	int ans  = 0 ; 
	for ( auto i : v ) { // n 
		ans |= i ; 
	}
	cout << ans << endl ;*/
	
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
