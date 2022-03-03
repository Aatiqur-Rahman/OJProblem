
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int r , c ; cin >> r >> c ; 

	bool arr[r][c] ; // '#' = 1 and '.'  = 0  

	bool flag = false ; 

	for ( int i = 0 ; i < r ; i ++ ) {

		string str ; cin >> str  ; // take input as string 

		int limit = str.size() ; 

		for ( int j = 0 ; j < limit  ; j ++ ) {

			if ( str[j] == '#'){
				if ( j != 0 ) {
					
					if ( str[j-1] == '#' )flag = true  ;  // check horizontally 

				}
				arr[i][j] = 1 ;

			}
			else {
				arr[i][j] = 0 ; 
			}
		}
	}

	if  ( flag == false )  { // to check vertically 

			for ( int j = 0 ; j < c ; j ++ ) {
		for ( int i = 0 ;  i < r ; i ++ ){
				if ( arr [i][j] == 1 ){
					if (i != 0 ) {
						if ( arr [i-1][j] == 1) {
							flag = true ; 
							j = c ; break ; 
						}

					}

				}
		}
			}

	}
	cout << ( flag ? "Yes" : "No" ) << endl; 
	
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
