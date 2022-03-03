
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;cin >> n; // total number of element be seen 
	int i =1 ;
	long long XOR = 3 ; 
	long long value = 3;
	cout << value  << " " ;

	while  ( i < n ) {

		while (1){

			++value ;

			int temp =  __builtin_popcount(value) ;
			
			int temp2 = XOR^value ;

			temp2 = __builtin_popcount(temp2);

			if  ( ( temp&1 ) != 1  && ( temp2&1 ) !=1 ) {

				cout << value << " " ; 

				XOR ^= value ;

				i++;

				break ; 

			}

		}	

	}
	cout << endl;	

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
