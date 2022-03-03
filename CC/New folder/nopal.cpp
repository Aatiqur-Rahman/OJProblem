
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}



void solve(){

	int n ; cin >> n ; // size of string 
	for ( int i = 0 ; i < n ; i += 3 ) {
		int temp = n-i ; 
		if (temp == 1 )cout << "a";
		else if (temp==2)cout << "ab";
		else {cout << "abc" ; }

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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
