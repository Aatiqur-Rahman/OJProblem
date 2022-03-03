
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int l , r ; // left to right 
	cin >> l >> r ;
	string s ; cin >> s ; // string to be processed 

	for ( int i = 0;   i < s.size() ; i++   ){
		if ( i !=  l-1 )
			cout << s[i] ; 

		else  {

			for ( int j = r-1 ; j >= l-1 ; j-- ){
				cout << s[j] ; 
			}

			i=r-1; 
		}

	}
	cout << endl; 
}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	// cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
