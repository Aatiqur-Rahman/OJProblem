
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str ; cin >> str; 

	bool keys[3] = { 0 } ;
	bool doors[3] = { 0 } ;


	bool flag = true ; 
	for ( int i = 0 ; i < str.size() ; i ++ ){
		if ( str[i] == 'r' or str[i] == 'g' or str[i] == 'b') {

			if (str[i] == 'r' ){
				keys[0] = true ;
			}
			else if (str[i] == 'g') {
				keys[1] = true ;
			}
			else {
				keys[2] = true ; 
			}

		}
		else {
			if (str[i] == 'R'){
				if (keys[0] == false ){
					flag = false ;
					break ; 
				}
			}
			else if  (str[i] == 'G') {
				if (keys[1] ==  false ){
					flag= false ; 
					break ; 
				}
			}
			else {
				if (keys[2] ==  false ){
					flag= false ; 
					break ; 
				}
			}
		}
	}
	cout << ( flag ? "YES" : "NO") << endl ; 
	
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
