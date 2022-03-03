
#include <bits/stdc++.h>

using namespace std;
vector< int > v1 , v2 ;
pair <int , int > p ;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
bool cmp1 ( pair <int , int > & a , pair <int , int > & b ) {
	return a.first < b.first ;
}

void solve(){
	int n , k ; // number of software  and ram 

	cin >> n >> k ; 

	for ( int i= 0 ; i < n; i++ ) {
		int data ; cin >> data;
		v1.push_back (data) ; 
	}
	for  (int i =0 ; i < n ; i++ ) {
		int data ; cin >> data ;
		v2.push_back (data) ; 
	}

	for  ( int i= 0 ;i < n ;i++) {
		p.insert ( v1[0] , v2[0]) ; 
	}
	sort ( p.begin () , p.end() , cmp1 ) ; 
	
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
