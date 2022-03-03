
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str ; cin >> str ;  // given string 
	// cout << "." ;

	//if  (str[i] == 'a')
	for ( int i = 0 ; i < str.size () ; i ++ ) {
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' )
		{
			
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
