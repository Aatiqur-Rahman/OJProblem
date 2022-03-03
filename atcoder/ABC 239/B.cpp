
#include <bits/stdc++.h>
#define endl '\n' 
#define int long long 
#define N 100000

using namespace std;
int dp[N] ; 

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

    int n ; cin >> n ;

    if ( n < 0 ) {
        n*=-1 ;
        if ( n % 10 == 0){
            cout << "-" << n/10 << endl; 

        }
        else { cout << "-"  << n/10+1 << endl;  }
    }
    else {
        cout << n/10 << endl ;
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
