
#include <bits/stdc++.h>
#define endl '\n'
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int calcalute ( int x1 , int y1 , int x2 , int y2 ) {
	 int temp1 = abs( x1 - x2 ) * abs ( x1 - x2 ) ; 
	 int temp2 = abs( y1 - y2 ) * abs ( y1 - y2 ) ;
	 //cout << "x1 : " << x1 << " y1 : " << y1 << " x2 : " << x2 << " y2 : " << y2 << " res : " << temp1+temp2 << endl; 
	 return temp1+temp2 ;  
}

void solve(){

	int a , b , c , d ;
	cin >> a >> b >> c >> d ;


	bool flag =  false ; 

	for ( int i = a-2 ; i <= a+3 ; i ++ ){
		for ( int j = b-2 ; j <= b+3 ; j ++ ){

			if ( calcalute ( i , j , a , b ) == 5 ) {
				if ( calcalute ( i , j , c , d ) ==  5){
					flag = true ;
					i = a+3 ;
					break ;
				}

			}

		}
	}

	cout << ( flag ? "Yes" : "No" ) << endl ; 
	
}

int32_t main(){
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
