
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	long long  n ; cin >> n; // given number 

	cout << n << " " ; 

	while (n>1){
		
		if (n&1){ // if odd 
			n=(n*3)+1 ;
			cout << n << " " ; // print the number muliply by 3 + 1 
		}

		else { // if even 
			n/=2 ;
			cout << n  << " " ; // print the number divided by 2 
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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
