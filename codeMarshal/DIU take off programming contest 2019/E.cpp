
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;cin>> n; // number of elements 


	bool flag = false ; // initially mark there is no zeros 

	for  ( int i = 0 ; i < n ; i++ ) {
		int data ; cin >> data ; 
		if (data == 0 ) {
			flag = true ;
		}
	}

	if ( n != 1 && flag ) {
		cout << "Solution Achhe Habibi!" << endl;
	}
	else {
		cout <<  "" << endl; 
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
