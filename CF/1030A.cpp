
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;cin >> n; // number of people 

	bool res = false ; //  initially easy problem 

	for  (int i = 0 ;i<n;i++) {

		bool data ; cin >> data ;

		if (data == 1 ) { // one person said hard problem is hard 

			res = true; 

		}
	}

	if (res) cout << "HARD" << endl;

	else {cout << "EASY" << endl;}
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
