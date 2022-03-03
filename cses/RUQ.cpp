
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

struct fenwick {
	vector < int > fn ;
	int n ; 

	void init ( int _size ) {
		this -> n = _size+1 ;
		fn.resize ( this -> n , 0 ) ; 
	}

	void update ( int index , int inc ) {

		index++ ;

		while ( index <= n ) {
			fn [index ] = max ( inc , fn [ index ] ) ;
			index += ( index & ( - index ) ) ; 
		}

	}

	void updateValue  ( int index , int inc ) {
		index ++ ;

		while  ( index <= n ) {
			fn [ index ] += inc ;
 		}
	}
	void build ( int index , int data ) {
		update ( index , data ) ;
	}
	int query  ( int index ) {

		int ans = 0 ;  // initial ansewer 
		while ( index > 0 ) {
			index -= ( index & ( - index ) ) ;
		} 

		return ans ; 
	}


	void print ( ) {
		for ( auto i : fn ) {
			cout << i << " " ;
		}
		cout << endl; 
	}
};


void solve(){
	vector < int > v ;
	int n ; cin>> n;// number of element 
	int q ; cin >> q ; // number of query 

	for ( int i =0 ; i < n ; i++) {
		int data ; cin >> data ;
		v.push_back (data) ;
	}
	
	// let's build segment tree 
	fenwick tree ;
	tree.init ( v.size() ) ;

	for ( int i = 0 ; i < v.size ()  ; i ++ ) {
		tree.build ( i , v [ i ] ) ;  
	}
 
	tree.print () ;
	tree.update ( 1 , 1 ) ; 

	for ( int i= 0 ; i<q ; i++ ) {
		int a ; cin >> a ; // query type 

		if (a == 1 ) {

			int l , r , value ; 

			cin >> l >> r >> value  ;

			cout << "left and right and value : " << l << " " << r  << " " <<  value << endl; 
			for ( int i = l ; i<= r ;i++ ) {
				tree. update ( i , value ) ;  
			}
			tree.print () ;

		}
		else {

			int pos ; cin >> pos  ; // value at position 

			cout << tree. query  ( pos ) << endl;  
		}
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
