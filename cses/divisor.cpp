
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n; cin >> n; // number 
	int cnt =1 ; // number of divisor of given number 
	if ( n==1 ){
		cout << cnt << '\n' ; 

	}
	else {
		cnt++;
		int limit = sqrt (n) ;
		for (int i = 2 ; i<= limit ; i++){
			if (n%i==0){ 
				cnt+=2;
				if (i == n/i){ // if two divisor is equal 
					cnt--;
				}
			}
		}
		cout << cnt << "\n" ; 
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
