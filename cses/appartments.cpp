
#include <bits/stdc++.h>

using namespace std;

vector < int > v_app ;
vector < int > v_appart ; 

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , m , k ; // number of applicants , appartments  , maximum difference 

	cin >> n >> m >> k ;

	for ( int i = 0 ; i < n ; i ++ ) {
			int data ; cin >> data; 

			v_app.push_back (data) ; 

	} 
	for ( int i =0 ; i < m ; i++ ) {
		int data ; cin >> data; 

		v_appart . push_back (data);
	}

	int cnt  = 0 ;

	//multiset <int > s_app ( v_app.begin() , v_app.end() ) ;

	//multiset <int > s ( v_appart.begin () , v_appart.end() ) ;

	sort ( v_app.begin() , v_app.end() ) ;
	sort ( v_appart.begin() , v_appart.end() ) ; 




	for ( int i = 0 ; i < v_app.size() ; i ++  ) {

		//cout << " applicants : " << i << " "; 

		if ( v_appart.size() < 1 )
			continue ; 

		for ( int j = 0 ; j < v_appart.size() ; j++ ) {

			int x = v_app [i] ; 
			cout << x << endl; 

			int temp1 = x - k ;
			int temp2 = x + k ;

				if (   x >= temp1 and x <= temp2 ) 	{

					//cout << "appartments : " <<  x << endl; 

					cnt ++ ;
					v_appart.erase ( v_appart.begin()+j ) ; 
					break ; 
				}
		}

	}

	cout << cnt << endl; 
	
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
