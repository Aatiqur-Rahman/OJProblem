
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	string str ; cin >> str ; 
	int cnt_0 = 0 ;
	int cnt_1 = 0 ;
	for ( int i = 0 ; i < str.size() ; i ++ ) {
		if (str[i] == '0' ) {

			cnt_0++ ;

		}
		else {

			cnt_1++;
		}
	}

	if ( cnt_0 == cnt_1) {

		cout << cnt_0 - 1 << endl; 

	}
	else { 

		cout << min(cnt_0,cnt_1) << endl; 

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
