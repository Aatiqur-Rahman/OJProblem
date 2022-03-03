
#include <bits/stdc++.h>
#define int long long 
#define mod 998244353
#define inv2 499122177

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

// n*(n+1) / 2 

// ( (  ( n % mode ) * ( (n+1) % mod ) % mod ) * inv2 ) % mod

int calculate ( int value ) {
		int res = ( value % mod ) ;


		res *= ( ( value + 1 ) % mod ) ; 

		res %= mod ; 

		res *= inv2 ; 

		res %= mod ; 


	    return res ;  

}
/*long long triangular_number(long long x){
  x%=mod;
  long long res=x;
  res*=(x+1);res%=mod;
  res*=inv2;res%=mod;
  return res;
}*/

void solve(){

	/*int value = 999999999999999999 ;

	calculate (value ) ; */


	 int n ; cin >> n ; 

	int res = 0 ; 

	int i = 1 ;

	int temp = -1 ; 

	while( i <= n ) {

		i *= 10 ; 

		int value = min ( i-1 , n ) ; 
		
		if ( temp == -1 )value = ( value + temp ) + 1 ; 
		else {

			value  =  value - temp + 1 ; 
		}
		res += calculate ( value )  ; 

		temp = i  ; 


	}

	cout << res%mod << endl;  

	
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
