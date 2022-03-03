
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , k ; cin >> n >> k ; // number of legs and durability

	vector <int > v ;

	for ( int i = 0 ; i < n ; i++ ) {
		int data ; cin >> data; 

		v.push_back ( data ) ; 
	}
	sort ( v.begin () , v.end() ) ;

	vector < int > __s  ;

	__s.push_back (v[v.size()-1]);

	__s.push_back (v[0]);

	int comp_value_1 = v[v.size()-1] ;
	int comp_value_2 = v [0] ; 

	for ( int i = v.size()-2 ; i >= 1 ; i --   ) {

  		if (  ( v[i] ^ comp_value_1 ) >= k and ( v[i] ^ comp_value_2 ) >= k  )  {
			comp_value_1 = v[i] ;

			__s.push_back ( v[i] ) ;
		}
	}

	for ( auto i : __s )  {
		cout << i <<  " " ; 
	}
	cout << endl; 



	
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
