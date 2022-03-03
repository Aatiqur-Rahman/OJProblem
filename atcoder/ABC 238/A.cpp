
#include <bits/stdc++.h>
#define int long long 
using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	
	int n ; cin >> n ;  

	int value = 1 ; 

	// - 2,147,483,648 to 2,147,483,647 
	// -2^31 to 2^31 -1 

	int lowerRange = - ( value << 31 )   ; 

	int upperRange = (value << 31 ) - 1 ; 

	if ( n >= lowerRange && n <= upperRange ) {
		cout << "Yes" << '\n' ; 
	}
	else {
		cout << "No" << '\n' ; 
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
