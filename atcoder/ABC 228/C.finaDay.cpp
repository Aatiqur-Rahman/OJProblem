
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n , k ;cin >> n >> k ;

	vector < int > v (n) ;

	for ( int i  = 0 ;i < n ; i ++ ){
		int a , b , c;

		cin >> a >> b >> c ;

		int sum = a+b+c ; 

		v[i] = sum ; 
	} 

	set < int > temp  (v.begin() , v.end() ) ; // n * log n 

	//vector < int > temp (v.begin () , v.end () ) ; 

	//sort ( v.begin () , v.end() , greater <int> () ) ; // n * log n  

	for ( int i =0 ; i < n ; i++ ){ // n 

		if ( temp[i] + 300 >= v[k-1] ){ // O (1) 
			cout << "Yes" << endl; 
		} 
		else {
			cout << "No" << endl; 
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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
