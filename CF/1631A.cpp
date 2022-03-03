
#include <bits/stdc++.h>

using namespace std;

vector <int > v1 , v2 ;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ;cin>> n;


	v1.clear () , v2.clear() ; 
	for ( int i = 0 ; i < n ; i ++ ) {
		int data ; cin >> data;

		v1.push_back (data) ; 

	}

	for ( int i =0 ; i < n ; i++ ) {
		int data ; cin >> data ; 
		v2.push_back (data) ; 
	}
	int maxx = INT_MIN ; 
	int maxy = INT_MIN;
	for ( int i = 0 ; i < v1.size() ; i++ ) {
		if (v1[i] < v2[i]){
			swap (v1[i], v2[i]) ;
		}
		if( maxx < v1[i]) maxx = v1[i] ;
		if( maxy < v2[i]) maxy = v2[i] ; 

	}
	cout << maxx*maxy << endl; 
	
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
