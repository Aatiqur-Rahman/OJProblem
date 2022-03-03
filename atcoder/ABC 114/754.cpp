
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str ; cin >> str ;

	int m = INT_MAX ;

	// 123456789
	// i     j

	int i = 0 , j= str.size()-3;

	while ( i <= j ) {
		int sum = 0 ;

		sum += ( str[j]-'0' ) * 100 ; 
		sum += ( str[j+1] - '0' )  * 10 ; 
		sum += ( str [j+2] - '0' ) ; 

		m = min ( m , abs ( sum - 753) ) ;

		j-- ; 
	}

	cout << m << '\n';
	
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
