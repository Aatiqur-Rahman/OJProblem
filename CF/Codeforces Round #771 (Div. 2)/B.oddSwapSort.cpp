
#include <bits/stdc++.h>
#define endl '\n' 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ; 

	vector < int > v(n); 

	bool flag =  true ; 

	int odd_sorted_idx  = -1 ; // to mark the current odd element index till sorted  
	int even_sorted_idx  = -1 ;// to mark the current even element index till sorted 

	for ( int i = 0 ; i < n; i++ ) {
		cin >> v[i] ;

		int j = i ; 

		if ( v[j]&1 ){
			if ( odd_sorted_idx != -1 and v[odd_sorted_idx] > v[j] )
				flag = false ; 
			else {
				odd_sorted_idx = j ;
			}
		}
		else {
			if ( even_sorted_idx != -1 and v[even_sorted_idx] > v[j]){
				flag = false ; 
			}	
			else {
				even_sorted_idx =  j ; 	
			}

		}				
	}
	
	cout << (flag ? "Yes" : "No") << endl; 
	
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
