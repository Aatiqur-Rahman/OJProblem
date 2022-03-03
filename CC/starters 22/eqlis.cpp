
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;cin >> n;

	if ( n==2 ){

		cout << "NO" << '\n';

	}

	else if (n&1){
		
		int i = 1 ;
		int j = 2 ;

		cout << "YES" << '\n' ; 
		cout << i << " " ;

		i+=2;

		while ( i <= n && j<= n ){

			cout << i << " " ;

			i+=2;

			cout << j << " " ;

			j+=2;

		}
		cout << endl;
	}
	else {
		int i = 1 ;
		int j = 2 ;

		cout << "YES" << '\n' ; 
		cout << i << " " ;

		i+=2;

		while ( i <= n && j<= n ){

			cout << i << " " ;

			i+=2;

			cout << j << " " ;

			j+=2;

		}
		cout << n << endl;

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
