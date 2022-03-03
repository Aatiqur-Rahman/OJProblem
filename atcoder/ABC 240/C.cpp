
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

/*bool dfs (vector <int > a [] , int X , int i , int N , int sum , bool flag ) {
	cout << sum << endl; 
	if ( i == N  and sum ==  X ) {
		return true ; 
	}
	else if ( i == N and sum != X ){
		return false ;
	}
	else {

		for ( auto j : a [i]){
			sum += j ; 
			bool temp  =  dfs( a , X , i+1 , N , sum , flag ) ;
			if (temp == true ) {
				return true ; 
			} 
			sum -= j ;
		}

		return flag ;

	}

	
}*/
bool dfs (){

}

void solve(){

	int N , X ; cin >> N >> X ;


	vector <int > a [N]  ;
	for ( int i = 0 ; i < N ; i ++ ) {
		int data1 , data2  ; cin >> data1 >> data2 ; 

		a[i].push_back (data1) ;
		a[i].push_back (data2) ;
	}	


	

	//cout << ( dfs( a , X , 0 , N , 0 , false ) ? "Yes" : "No" ) << endl;  
	
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
