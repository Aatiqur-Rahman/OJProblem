
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int a , b ; // division point 
	int x , y ; // coordinate of point 

	// first check division point  if ( x == a || y == b )
	// NE if ( x > a && y > b )
	// NO if ( x < a && y > b )
	// SE if ( x > a && y < b )
	// So if ( x < a && y < b )	
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
	while ( true ){


		cin >> c ; 
		if (c == 0 ) break ; 

		int a , b ; cin >> a >> b ; // division point 
		

		for  ( int i = 0 ; i < c ; i++ ) {

			int x , y ; cin >> x >> y ; // coordinates of point 

			if ( x == a || y == b ) cout << "divisa" << '\n' ;

			else if ( x > a && y > b ) { cout << "NE" << '\n' ; }

			else if ( x < a && y > b ) { cout << "NO" << '\n' ; }

			else if ( x > a && y < b ) { cout << "SE" << '\n' ; }

			else { cout << "SO" << '\n' ; }


		}

	}

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
