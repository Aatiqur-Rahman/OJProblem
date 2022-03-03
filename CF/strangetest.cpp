
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
int answer ( int a , int b) {

	int cnt  = 0 ; 

	while ( a != b) {

		if (a == b ) {
			return cnt  ;

		}

		else if (a > b ){

			return cnt + a - b ; 

		}
		else {

			cnt++;
			int temp = a|b ;

			cout << " a " <<  a  << " b " << b  << endl; 
			cout << "temp :  " <<  temp << endl; 

			if ( abs (temp - b) < abs ( a - b ) ) {

				a = temp  ; 

			}
			else if ( a < b ){

				a++;
			}
			else {
				b++;
			}

		}

	}	

	return cnt  ; 

}

void solve(){

	//int a , b ; cin >> a >> b ;

	//cout << answer (a , b ) << endl; 

	int a =1 , b = 5 ;

	for ( int i = 21 ; i >= 0 ; i--) {

		cout << ( b >> i) << endl; 

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
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
