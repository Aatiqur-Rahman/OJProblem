
#include <bits/stdc++.h>
#define endl '\n' 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int a , b ,c ,d ; cin >> a >> b >> c >> d ; 

	int cyanBalls = a , redBalls = 0 ; 

	int cnt  = 0 ; 

	if ( b < c*d )  {
 
		while ( cyanBalls  > redBalls*d ) {

			//if ( ( c&1)  == 0 and  (d&1) == 1 ) { flag = false ; break ;}
			cnt ++ ; 
			cyanBalls += b , redBalls += c ;

		}

		cout << cnt << endl; 
	}
	else {

		cout << -1 << endl; 

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
