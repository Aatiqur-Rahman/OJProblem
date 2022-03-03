
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
struct fenwick {

	vector < int  > fn ; // fenwickTree array 
	int n ; // size of array  

	void init ( int _size ) {
		
		this -> n = _size+1 ;

		fn.resize ( this->n , 0 ) ;

	}

	void update ( int i , int inc ) {

		i++ ; 

		while ( i <  n  ){

			fn[i]  += inc ; 

			i += ( i & ( - i ) ) ; // adding last bit to i ;
		}
	}

	void build ( int i , int data ) {
		update ( i , data ) ; 
	}

	int query ( int index ) {
		
		int ans = 0 ; // initial answer 

		while ( index > 0 ) {
			ans += fn [ index ]  ; 
			index -= ( index & ( - index ) ) ;
		}
		return ans ; 
	}

	void print () {
		for ( auto i : fn ) {
			cout << i << " " ;
		}
		cout << endl; 
	}

};

void solve(){

	vector < int > v ;

	int n , q ; cin >> n >> q ; // number of element and query 

	for  ( int i = 0 ; i < n ; i++ ) {

		int data ; cin >> data ;

		v.push_back ( data ) ; 

	}

	// build 

	fenwick tree ;
	tree. init  ( v.size () ) ; 
	for ( int i = 0 ; i < n ; i ++) {

		tree.build ( i , v [ i ] ) ;  
	}

	tree. print  () ;
	 for ( int i = 0 ; i < q ; i ++  ) {

		int a  ; // query type 

		cin >> a ;  

		if ( a == 1 ) { // print for given range 

			int l , r ;

			cin >> l >> r ; // given range 


			cout << tree.query( r-1 ) - tree.query (l-1) << endl; 

		}

		else { // update 
			
			int index , value ; 
			
			cin >> index >> value ; // given index and value  
			
			tree. update ( index , value ) ; 

		}
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
