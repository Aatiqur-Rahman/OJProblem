
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

	/*void update ( int i , int inc ) {
	    
	    //vector < int > v { 1,8,3,4,5,6,7,10 };
		i++ ;
		while ( i <  n  ){

			fn[i] = max ( fn [ i ] , inc );

			i += ( i & ( - i ) ) ; // adding last bit to i ;
		}
	}*/
	
	void update (int i , int data ) {
	    
	    i++ ;
	    while ( i <= n) {
                
            fn[i] = fn[i] + data ; 
        
            i += (i & -i) ; 
            
	    }
	}

	void build ( int i , int data ) {
		update ( i , data ) ; 
	}

	int query ( int index ) {
		
		int ans = 0 ; // initial answer 

		while ( index > 0 ) {
			ans +=  fn [ index ] ; 
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

	int n , q ; cin >> n >> q ; // number of elements and query  

	vector < int > v ; // initial data 

	for ( int i = 0 ; i  < n ; i ++ ) {
		int data ; cin >> data ; 
		v.push_back (data) ; 
	}

	// fenwickTree init 

	fenwick tree ;
	tree.init ( v.size () ) ;

	// fenwick tree build 

	for ( int i = 0 ; i < v.size () ; i++ ) {

		tree.build ( i , v [i] ) ; 

	} 
	tree.print() ; 

	// query 
	while  ( q -- ) {
		int a  ; cin >> a ; // range ;

		if ( a == 0 ) {
			int p , value ; cin >> p >> value ; 

			tree.update ( p , value ) ; 
		}
		else {
			int l , r ; cin >> l >> r ;   
			
			cout  <<  tree.query(r) - tree.query (l) << endl; 

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
