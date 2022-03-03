
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	

	int n ; cin >> n; // number of elements 

	bool used [n+1] = { false }; // to mark each element 
	int arr[n]; // to store element  

	for ( int i = 0 ; i <  n ;i ++) {
			int data ; cin >> data; 
			arr [i] = data ;

	}

	sort ( arr , arr + n , [] (int a , int b ){return a>b ;} ) ;

	for ( int i = 0 ; i < n ;i ++) {
			cout << arr [i] << " " ;
	 }
	 cout << endl; 

	/*bool ok = true ; 
	for ( int i = 0 ; i < n ; i ++ ) {

			int temp = arr [i] ; 

			while ( temp > n  or used [ temp ] ) {

				temp /= 2 ;

			
			if ( temp > 0 ) {
				
				used[temp] = true; 

			}
			else { ok = false ; }
		}

	}

	cout << ( ok ? "Yes" : "No" ) << '\n' ; */

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
