
#include <bits/stdc++.h>
#define int long long 
#define endl '\n' 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n; 

	vector < int > v (n) ;


	int sum  = 0 ; 
	int cnt = 0 ; 

	for ( int i = 0 ; i < n ; i ++ ) {
		cin >> v[i] ;
		sum += v[i] ; 
	}

	int X ; cin >> X ;


			  int temp =  X   / sum ;
			  sum += ( temp - 1 ) * sum  ; 

			  cnt = n * temp ; 
			  for ( int i = 0 ; i < n ; i ++ ){

			  	if ( v[i] + sum <= X ) {
			  			sum += v[i] ;
			  			cnt ++ ;
			  	}
			  	else break ; 

			  	
			  }
			  

			  cout << cnt+1 << endl; 

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
