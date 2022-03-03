
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n ; cin >> n; 
	int zeros = 0 ; // number of trailing zeros , initially 0 ; 
	if  (n<5) cout << zeros << endl;
	else {
		long long i = 5;
		while ( i <= n ){
			zeros+=n/i;
			i*=5 ; 
		}
		cout << zeros << endl;
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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
