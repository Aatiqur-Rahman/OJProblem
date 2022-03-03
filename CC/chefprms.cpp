
#include <bits/stdc++.h>

using namespace std;
vector <int > v; 

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

bool prime (int n) {
	if (n==1 || n==2){
		return false ;
	}
	else {
		int limit = sqrt (n) ;  
		for (int i=2; i<= limit ; i++) {
			if (n%i==0){
				return false ;
			}

		}

		return true ; 

	}
}

void solve(){
	int n ; cin >> n ; // given number 

	if ( prime (n) ){
		cout<< "NO" << endl;
	} 
	else {
		v.clear () ;
		int limit = sqrt (n) ;
		for (int i=2 ; i <= limit ; i++ ) {
			
			if ( n%i == 0 ) {

				cout << i << endl;

				while ( (n%i) == 0 ) {

					n/=i;

					v.push_back (i) ; 

				}

			}
			
		}
		for (auto i : v ) {
			cout << i << " " ;
		}
		cout<< endl;

		if (v.size()<2){

			cout << "NO" << endl;
		}
		else {

			cout << "YES" << endl;
		}
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
