
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int r , c ;  cin >> r >> c ; // row and column 

	int arr[r][c] ; 

	for ( int i = 0 ; i < r ; i ++ ) {
		for ( int j = 0 ;  j < c ; j ++ ) {

			cin >> arr[i][j] ; 

		}
	}

	for ( int i = 0 ; i < c ; i ++  ) {

		for ( int j = 0 ; j < r ; j ++ ) {

			cout << arr [j][i] << " " ;

		}

		cout << endl; 

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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
