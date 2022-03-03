
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int a , b , c; cin >> a >> b >> c ; 


	int i = 1; 
	int c_c = c; 
	while (true ){
		c = c_c * i ; 

		if ( c > b ) break ; 
		if ( c >= a and c <= b ) break ; 

		i++ ; 
	}
	if (c > b ) {
		cout << "-1" << endl; 
	}
	else { cout << c << endl;  } 
	
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
