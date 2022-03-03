
#include <bits/stdc++.h>

#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

// min element 
struct segmentTree {

	int n = 0 ; 
	vector < long long  > st ;

	void init (int _size) {

		this -> n = _size ; 
		st.resize( 4*n , 0 );


	}
	int build ( vector < int > &v , int s , int e , int  node  ) {

		// base case  
		if ( s==e ) {
			return  st[node] = v [s] ; 
 		}

 		// rec case 

 		int mid = ( s+e ) / 2 ; 
 		return st [node] = min ( build ( v , s , mid , 2*node+1 ) , build( v , mid+1 , e ,  2*node+2 ) ) ;

	} 

	void buildHelper ( vector <int> &v , int s , int e , int  node ) {
		// call build function 

		build ( v , s , e , node );
	}

	int  query ( int s , int e , int l , int r , int  node  ) {
		// complete overlap 
		if ( s >= l && e <= r  ) {
			return st [ node ] ;
		}

		// no overlap 

		if ( e < l || s > r  ) {
			return INT_MAX ;
		}

		// partial overlap 
		int mid  = ( s+e ) / 2 ;

		return min ( query ( s , mid , l , r , 2*node+1 ) , query ( mid+1 , e , l , r , 2*node+2 ) ) ;


	}

	int queryHelper (int l , int r) {

		return query ( 0 , n-1 , l , r , 0 ) ;

	}

	void update (int s , int e , int index , int value , int node )  {

		if ( s==e ) {

			st [node] = value ; 

			return ;
		}

		int mid = ( s+e ) / 2 ;


		if (index <=  mid ) {

			update ( s , mid , index , value , 2*node+1 ) ;

		}

		else {

			update ( mid+1 , e , index , value , 2*node+2 ) ;
		}

		st [ node ] = min ( st [ 2*node+1 ] , st [ 2*node+2 ] ) ;
		return ;

	}
	void updateHelper (int index , int value ) {

		update ( 0 , n-1 , index , value , 0 );

	}

	void print () {
		for (auto i : st ) {
			cout << i << " " ;
		}
		cout << endl; 
	}


};

void solve(){
	vector < int > v ;  // store the element 
	int n ; cin >> n; // number of element 

	int q ; cin >> q ; // number of query 

	for  ( int i = 0; i < n ;i ++ ) {
		int data ; cin>> data ;
		v.push_back (data)  ;
	}

	// segment tree build 
	segmentTree tree ; 
	tree.init ( v.size () ) ; 
	// void buildHelper ( vector <int> &v , int s , int e , int  node )

	tree.buildHelper ( v , 0 , v.size() - 1 , 0 ) ;

	// query 

	for ( int i = 0 ; i < q ; i ++ ) {

		int t , a , b ; // type of query and range or index and data; 
		cin >> t >> a >> b ; 

		if  ( t==1) {

			// update query 
			tree.updateHelper ( a-1 , b ) ;
		} 
		else {

			// sum query  to print  
			cout << tree.queryHelper ( a-1 , b-1 ) << endl ; 
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
