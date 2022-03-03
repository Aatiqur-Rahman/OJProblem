
#include <bits/stdc++.h>
#define int long long

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n; 


	vector < int >  v ;

	while ( n ) {
		v.push_back ( n % 10 ) ;
		n/= 10 ;
	}


	sort ( v.begin () , v.end () , greater <> () ) ; 

	
	vector < int > a , b ;

	if ( v.size() & 1 ) 
	{
		 for ( int i = 1 ; i < v.size() ; i += 2   ){

				a.push_back ( v[i] ) ; 
				b.push_back (v[i-1]) ; 
		}
		a.push_back ( v[v.size() -1 ]);

		for ( auto i : a ){
			cout << i << " " ;
		}
		cout << endl;
		for ( auto i : b ){
			cout << i << " " ;
		}
		cout << endl;

		int sum1 =  0 , sum2 = 0  ; 
		int j = 0 ; 

		for ( int i = a.size() -1 ; i >= 0 ; i -- ) {

			sum1 += a[i] * pow ( 10 , j ) ;
			j++ ;
		}

		j = 0 ; 

		for ( int i = b.size()-1 ; i >= 0 ; i -- ){
			sum2 += b[i] * pow ( 10 , j ) ;
		}


		cout << sum1 << " " << sum2 << endl; 
		
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
