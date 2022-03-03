
#include <bits/stdc++.h>
#define endl '\n'
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n ; 

	bool flag = true ;

	int even = 0 ;
	


	vector <int > v ; 

	for ( int i = 0 ; i < n ; i ++ ) {
			int data ; cin >> data ; 
			 v.push_back (data) ; 

			if (i == 0 or i==n-1)continue ; 

			if ( data == 1  ){

				even++;
			}
			

	} 

	if ( n==3 and v[1]%2 == 1  ){
		cout << "-1" << endl; 
	}
	else if ( even == ( n-2 )  ) {

		cout << "-1" << endl; 
	}
	else {
		int sum  = 0 ; 
			
			for ( int i = 1 ; i < n-1 ; i++  ) {

				if (v[i] & 1 ) {
					sum += ( ( v[i]+1 ) / 2 ) ;  
				}
				else {

					sum += ( v[i] / 2 ) ; 

				}
			}

			cout << sum << endl; 
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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
