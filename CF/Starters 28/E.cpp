
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , m ; cin >> n >> m ;

	bool visited [n+1] = { false }  ; 

	vector < int > edge[n+1] ; 
	for ( int i = 0 ; i < m ; i ++ ){
			int a , b ; cin >> a >> b  ; 
			edge[a] . push_back ( b ) ;
			edge[b] . push_back ( a ) ;

			visited[a] = true ;
			visited[b] = true ; 
	}
	int cnt  = 0 ;
	for ( int i = 1 ; i < n+1 ; i ++ ){
			if ( visited[ i ] == false ){
				cnt ++ ; 
			}
	}
	if ( n == 2 )cout << cnt-1 << endl ; 
	else {
		cout << cnt << endl ; 
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
