
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n; 

	char str[100001] ;
	int abc[150] =  { 0 } ;  

	for ( int i  = 0 ; i < n ; i ++ ){
			cin >> str[i] ;

			abc[int ( str[i] ) ] ++ ; 
	}

	for ( int i = 97 ; i <= 122 ; i ++ ){
			cout << abc[i] << " " ;
	}
	cout << endl; 

	/*
	int cnt = 0 ; 


		for ( int j = 0; j < n ; j ++ ){

				if ( str [j] == c ) {

					cnt += j + 1 ; 

					cout << cnt << endl ; 

					str[j] = ' ' ; 

					break ; 
				}

				if ( str[j] == ' ' ) {
					cnt -- ; 
				}
		}

	cout << cnt << endl; 
	*/
	
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
