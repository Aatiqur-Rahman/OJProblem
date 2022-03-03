
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	
}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	//int c =1;
	//cin >> c ;
	while (true) {

		int a , b , c , d ; cin >> a >> b >> c >> d ;

		if ( a==0 && b == 0 && c == 0 && d == 0 ) break ; 

		int res1 = 360 - ( abs ( b-a ) * 9 ) ; 
		int res2 = 360 - ( abs ( b-c ) * 9 ) ;
		int res3 = 360 - ( abs ( d-c ) * 9 ) ;


		cout << 720+res1 + 360+res2 + res3 << '\n' ; 

	}

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
