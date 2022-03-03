
#include <bits/stdc++.h>

using namespace std;
vector < int > v;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ; // number of candies 

	for  ( int i= 0 ; i< n ;i ++) {
		int data ; cin >> data ; 

		v.push_back (data);

	}

	int l , r ; cin >> l >> r  ; // range 

	int sum = 0 ;  // initial answer 
	for ( int i = l ; i <= r ; i ++) {

		sum+= v[i] ; 

	}
	cout << sum << endl; 
	
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
