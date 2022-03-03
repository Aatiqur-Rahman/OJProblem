
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}


struct segmentTree {

	int n = 0 ; 
	vector < int  > st ;

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
 		int data = min ( build ( v , s , mid , 2*node+1 ) , build ( v , mid+1 , e ,  2*node+2 ) ) ;
 		 // cout<<  "start :  " << s << " end :  " << e << " mid : " << mid <<  " data : " <<  data << endl; 
 		return st [ node ] = data  ; 

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

	void print () {
		for (auto i : st ) {
			cout << i << " " ;
		}
		cout << endl; 
	}


};

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
