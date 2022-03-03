
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int ma = INT_MIN ;
	int mi =  INT_MAX ; 

	int n ; cin >> n;

	for  ( int i = 0 ; i < n ; i++ ) {
		int data ; cin >> data ; 

		if (data > ma ) ma = data ;
		if (data < mi ) mi =  data ; 
	}

	cout <<  ( ma-mi ) * 2 << endl ; 
	
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
