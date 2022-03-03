
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ;


	if ( n % 7 == 0 ) {
		cout << n << '\n' ; 
	}
	else {
		if ( n < 7 ) {
			cout << 7 << '\n' ; 
		}
		else {
			int temp = n%7 ;
			int last = n%10 ;
			int add = 7-temp ; 
		
			if ( last + add >= 10 ) {
				cout << n-temp << '\n' ; 
			}
			else {
				cout << n+add << '\n' ; 
			}
		}
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
