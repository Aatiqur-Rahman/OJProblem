#include < bits/stdc++.h>

using namespace std ;

int64_t Pow ( int64_t x , int64_t p , int64_t MOD ) {
	if ( p == 0) return 1 ; 
	if ( p&1 ) {
		return ( x * Pow ( x , p - 1 ) ) % MOD ; 
	}
	int half = Pow ( x , p / 2 , MOD ) ; 
	return ( half * half ) % MOD; 

}

int main () {



	return  0 ;  
}