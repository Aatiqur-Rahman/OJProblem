
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n; cin >> n;
	vector <int > v  (n) ;

	for ( int i = 0 ; i < n; i++ ){
		int data; cin >> data;

		v[i]= data; 
	}

	int  cnt  = 0 ; 
	bool flag = true ; 

	for ( int i = 0 ; i < n-2 ; i ++ ){
		if ( v[i] > v [ i+1 ] ) {

			int temp = abs ( v[i+1] - (v[i+2]) )  ; 

			if (temp  < v[i] ) {
				v[i] = temp ;
				cnt++ ; 
			}
			else if (temp == v[i]){

			}
			else {
				cout << v[i] << " " << v[i+1] << " " << v[i+2] << endl; 
				flag = false ;
				break ; 
			}
		}
	}
	flag ? cout << cnt << endl : cout <<  "-1" << endl; 
	
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
