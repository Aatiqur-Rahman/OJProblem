
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	// last set bit 
	// 1 1
	// 2 2
	// 3 1
	// 4 4
	// 5 1
	// 6 2 
	// 7 1 
	// 8 8 
	// 9 1 
	// 10 2 
	// 11 1
	// 12 4 
	// 13 1 
	// 14 2 
	// 15 1 
	// 16 16 
	// and so on 

	// sum is less than or equal . lets 15 and 16
	// adding set bits of sum 1111 is equal to 15 maximum we used is 8 

	ostream_iterator < int > o (cout , " " ) ; 

	int sum , limit ; cin >> sum >> limit  ; 


	if ( sum > limit ) {

		int i = 0 ; 

		vector < int > v ;

		while ( limit ) {

			int value = ( limit & - limit ) ; // calculating last set bits 

			if ( i + value <= sum ){ // 

				v.push_back ( limit ) ; 

				i += value  ; 
			}

			limit -- ;
		}

		if ( i < sum ) cout << "-1" << endl;
		else {
			cout<< v.size() << endl ;
			copy  ( v.begin ()  , v.end () ,  o ) ;
			cout << endl;  
		}  


	}
	
	else { 
		cout << __builtin_popcount ( sum ) << endl ; // number of set bits 

		int i= 0 ;

		while ( sum ){
			if ( sum & 1 ){
				int value = 1 << i ; 
				cout << value << " " ; 
			}
			sum = sum >> 1 ;
			i++ ; 
		}
		cout << endl; 
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
