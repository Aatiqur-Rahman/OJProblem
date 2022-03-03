
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n;
	vector < int > v (n) ;

	for ( int i  = 0 ; i < n; i ++ ){
		int data ; cin >> data ; 

		v[i] = data ; 
	}

	vector <int > temp ( v.begin() , v.end() ) ; 
	if ( n == 2 ) {
		cout << "0" << endl; 
		for ( int i = 0 ;i < n ; i ++ ){
			cout << v[i] << " " ;
		}
		cout << endl; 
	}


	else if ( n == 3 ) {
		if ( v[1] > v[0] and v[1] > v[2]){
			v[1] = v[2] ; 
			cout << "1" << endl ;
			for ( int i = 0 ; i < n ; i ++ ){
				cout << v[i] << " " ;
			}
			cout << endl; 
		}
		else {
			cout << "0" << endl;
			for ( auto i : v ){
				cout << i << " " ; 
			}
			cout << endl; 
		}
	}
	else {
		int cnt_ = 0 ;
		int cnt = 0 ;

		for ( int i = 1; i < n-1 ; i ++  ){

			if (v[i] > v[i-1] and v[i] > v[i+1]){
				
				if ( i + 2 < n and v[i+2] > v[i])
					v[i+1] = v[i+2] ;
				else {
					v[i+1] = v[i] ; 
				}
				cnt ++ ;
			}
	
		}


			cout << cnt << endl; 
			for ( auto i : v ){
				cout << i << " ";
			}	
			cout << endl; 

		
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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
