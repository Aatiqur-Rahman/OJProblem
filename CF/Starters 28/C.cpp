
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n ; cin >> n ;

	int a = 6 , b = 7 ; 


	int cnt = 0 ; 
	for ( int i  = 0 ; i < n ; i++){
			int data; cin >> data; 

			if ( (data-a ) %7 == 0  or ( data - b ) % 7 == 0  ){}
			else {
				cnt ++ ;
			}

	}		
	cout << cnt + 8 << endl; 
	
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
