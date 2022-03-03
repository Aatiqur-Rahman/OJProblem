
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){


	int n , k ;  cin >> n >> k ; 


	// if k is less than n-1 
	// simply do & with n-1 and all the pair from n-1 to 0 
	// have to and with the number , the & between pair is zero 

	// ex : n = 8 , k = 6 ; 7 & 6 = 6 
	// all the number from 0 to 7 except 6 and 7 have to be pair with the number 
	// the & between the pair is zero 
	// 6 & 1 = 0  i = 6 and j = 1  
	// 5 & 2 = 0  i = 5 and j = 2
	// 4 & 3 = 0  i = 4 and j = 3
	// 7 & 0 = 0  i = 7 and j = 0


	// if k is equal n-1 
	// except one case which is 4 and 3 
	// n-1 and n gives 0 ;
	// to output n-1 uses two state 
	// first , find maximum possible value which is n-2 , can obtain and with n-2 and n-1 
	// second , for n-1 we need extra one , can obtain by and with any odd number 
	// all pair except this four must output zero 

	// n=8 , k = 7  ; 
	// 7 & 6 = 6 + 1 = 5 & 1 ;
	
	// 7 & 6 = 6
	// 5 & 1 = 1 
	// 4 & 3 = 0
	// 2 & 0 = 0 




	if ( k == n-1 ) { 

		if ( n == 4 and k == 3 ) // if and only if n==4 and k==3 resulting -1 
				cout << "-1" << '\n' ; 
		else {

			cout << n-1 << " " << n-2 << '\n';

			cout << n-3 << " " << 1 << '\n' ;

			for ( int i = n-4 , j = 3 ; i >=n/2, j < n/2 ; i-- , j++ ) {

				cout << i << " "  << j << '\n' ; 

			}
			cout << 2 << " " << 0 << '\n' ; 
		}

	}

	else {

		cout << k << " " << n-1 << '\n' ;

		int temp=0 ; 

		for (int i = n-2 , j = 1 ; i >= n/2 , j < n/2  ; i -- , j ++ ) {


				if ( i == k ) {
					temp = j ;
					continue ; 
				}
				if ( j == k ) {
					temp = i ; 
					continue ;
				}

				cout << i << " " << j << '\n' ; 

		}

		if (k != 0 )cout << temp << " " << 0 << '\n' ; 
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
