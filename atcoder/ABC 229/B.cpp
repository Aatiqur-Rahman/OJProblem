
#include <bits/stdc++.h>
#define int long long 

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){


	int a , b ; cin >> a >> b ; // two numbers 

	bool flag  = true ;  // initially easy 

	while ( a > 0  and b > 0) {

		int temp1 = a % 10; a /= 10 ; // last digit of A
		int temp2 = b % 10; b /= 10 ; //  last digit of B 

		if ( (temp1+temp2) >= 10 ) { // if have a carry 
			cout << "Hard" << '\n' ;
			flag = false ; 
			break ;
		}
	}
	if (flag ) cout << "Easy" << '\n' ; 
	
}

int32_t main(){
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
