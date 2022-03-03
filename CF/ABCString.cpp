
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str ; cin >> str ;

	int cnt_1 = 0 ;
	int cnt_0 = 0 ; 

	int arr[3] = {0};


	// firstly condition is to balanced of 'A' , 'B' and 'C'
	// secondly first letter of string and last letter of stirng is not equal 
	
	// arr[0] = 'A' 
	// arr[1] = 'B' 
	// arr[2] = 'C' 

	char t = str[0] ; 

	for ( int i = 0 ; i < str.size() ; i ++ ) {

		if (str[i] == 'A' ) {
			arr[0] ++ ; 
		} 
		else if  (str [i] == 'B'){
			arr[1] ++ ;
		}
		else {
			arr[2] ++ ;
		}

	}

	int m = max ( max ( arr [0] , arr [1] ) , arr [2] ) ; 

	cnt_1 = m ; 
	cnt_0 = str.size() - m ; 


	if ( cnt_0 == cnt_1 and str[0] != str [ str.size()-1 ] ) cout << "Yes" << endl; 
	else {
		cout << "No" << endl; 
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
