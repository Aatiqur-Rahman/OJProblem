
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	/*int n ; cin >> n;
	v.clear() ; 
	for ( int i = 0 ; i < n ; i++ ) {
		int d ; cin >> d ;
		v.push_back(d) ; 
	}*/

	vector < int > v = { 1,2,3,4,5,6 }; 

	int count_data = v[v.size()-1] ; 
	
	int cnt  = 0 ;

	int limit = v.size()/2 ; 

	for ( int i = 0 ; i < v.size()-1 ; i++  )  {

		cout << "limit"  << limit << endl; 
		
		for ( int j = i ; j <= limit ; j ++ ) {

			if (v[j] != count_data ){
				i = limit+1 ; 
				cnt++ ; 
				limit/=2 ; 
				break;
			}

		}
		limit/=2 ; 
		i = limit+1 ;


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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
