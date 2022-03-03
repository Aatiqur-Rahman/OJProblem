
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	vector <int > data; // to store data 
	int n ; cin >> n  ; // number of element  
	int q ; cin >> q ; // number of query 

	for  (int i = 0 ; i < n ; i ++ ) {

		int value ;  cin >> value ;
		data.push_back (value ) ;

	}

	// segment tree init 

	segmentTree tree ;
	tree.init ( data.size() ) ;

	// segment tree  build 

	tree.buildHelper ( data , 0 , data.size () -1 , 0  ) ;


	// query  
	for ( int i =0 ; i<q ; i++ ) {

		int l , r ; cin >> l >> r ; // range of query

		// call segment tree query 

		cout << tree.queryHelper ( l-1, r-1 )  << endl ;

	}
	
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
