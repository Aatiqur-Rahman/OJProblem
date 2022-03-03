
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str1,str2 ; cin >> str1 >> str2 ;

	//vector <bool> dp ( str1.size() ,false ) ;
	int s1 = str1.size() ;

	int s2 = str2.size() ;

	int LCS [s1][s2] ; 


	for ( int i = 0 ; i <= str1.size() ; i++ ){

		

		for ( int j = 0  ; j <= str2.size() ; j ++ ) {

			if ( i == 0 || j == 0 ) LCS [i][j] = 0 ; 

			else {

				LCS [i][j] = max (LCS [i-1][j] , LCS [i][j-1]) ;
				cout << LCS [i][j] << " ";

				if ( str1 [i-1] == str2 [j-1] ) {

					LCS[i][j] = max (LCS [i][j] , LCS [i-1][j-1] + 1 ) ; 
				}

			}
		}
		cout << endl; 


	}
	 


	/*for ( int i = 0 ; i < str1.size() ; i ++  ) {
		if ( dp [i] == 1 ){
			cout << str1 [i] ; 
		}
	}
	cout << endl; */
	
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
