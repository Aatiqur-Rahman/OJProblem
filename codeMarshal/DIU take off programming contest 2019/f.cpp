
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve( int i){
	
	int n; cin>> n ;
	string s1 , s2 ; cin >> s1 >> s2 ; 

	for ( int i = 0 ; i< s1.size() ; i ++  ) {

		if ( s1 [i] >= 65 && s1 [i] <= 90 ) {

			s1[i] += 32 ;

		}
		if ( s2 [i] >= 65 && s2 [i] <= 90){

			s2[i] += 32 ;
		}

	}

	int cnt = 0 ; 

	for ( int i= 0 ;i < s1.size()  ; i++) {
		for ( int j = 0 ; j < s2.size ()  ; j ++) {

			//cout << s1[i] << " " << s2[j] << endl; 

			if ( s1 [i] == s2 [j] ) {
				cnt ++ ; 

				s2[j] = '0' ; 
				j=s2.size();
			}
		}
	}

	if (cnt == n ){

		cout << "case " << i << ": " << "vai problem solve hoy na" << endl;

	}
	else {

		cout << "case " << i << ": " << "table e boisha thak solve hobe" << endl;
	}

}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int i = 1,c = 1;
	cin >> c ;
	while (c--){

		solve(i);
		i++ ; 

	}

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
