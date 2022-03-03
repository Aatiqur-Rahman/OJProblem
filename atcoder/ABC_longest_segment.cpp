
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n ; cin >> n ; // number of points 

	int x[n] , y[n] ;  // points array 

	cin >> x[0] >> y[0] ; // first point 

	double ans = 0.0 ; // initial result 

	for (int i = 1 ; i < n ; i++) {

		cin >> x[i] >> y[i] ;  // n-1 point 

		for ( int j = i-1 ; j >= 0 ; j -- ) {


			double xp =  x[i] - x[j] ; xp *= xp ; 
			double yp =  y[i] - y[j] ; yp *= yp ; 

			double sum = xp + yp ;
			
			ans = max ( ans , sqrt ( sum ) );

			

		}
	}

	//printf ( "%.10f\n" ,  ans ) ; 
	cout << fixed << setprecision (7) << ans << endl; 

}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	//'cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
