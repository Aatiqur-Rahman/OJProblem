

#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ; 

	string str; cin >> str ; 

	if ( n > 2 ) {
		cout << "NO" << '\n' ;
	}
	else if ( n==2 ){

		if (str [0] == str[1]){

			cout << "NO" << '\n' ; 
		}
		else{

			cout << "YES" << endl; 
		}


	}
	else {
		cout << "YES" << endl; 

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
