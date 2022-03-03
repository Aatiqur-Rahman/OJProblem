
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n;

	//ostream_operator <int> os (cout , " " ) ; 

	if ( n > 3 )for ( int i =  n ; i > 0 ; i-- ){
			for ( int j = i ; j > 0 ; j --  ){
					cout << j << " " ;
			}
			for ( int k = n ; k > i ; k --  ){
					cout << k << " " ;
			}
			cout << endl; 
	}
	else {
		cout << "3 2 1" << endl;
		cout << "3 1 2" << endl;
		cout << "2 3 1" << endl;
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
