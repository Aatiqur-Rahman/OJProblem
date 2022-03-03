
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int r,c; cin >> r >> c; // size of theatre square 
	int a ; cin >> a ; // size of flagstones 

	if (r>a && c>a){ // if row and column size of
					 // square is greater than flagstones 

		long long temp1 = ceil(r*1.0/a*1.0); // calculation for row 
		long long temp2 = ceil(c*1.0/a*1.0); // calculation for column 

		cout << temp1*temp2 << endl; // multiplication of flagstone 
									 // needed for both row and column 
									 // is the correct answer 

	}
	else if (r<=a && c<=a) { //  if square size 
							 // is less than flagstone need 1 flagstone 
		cout << 1 << endl;
	}
	else  {
		if (c>a) cout << ceil(c*1.0/a*1.0) << endl ; // row is less than flagstone 
		else { cout << ceil(r*1.0/c*1.0) << endl ; } // column is less than flagstone 
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
