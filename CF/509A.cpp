
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n; // grid number 
	cin >> n;
	int arr[n][n]={0};
	for (int i=0 ; i<n ; i++ ){
		for (int j= 0 ; j<n ; j++){
			if (i==0){
				arr[i][j] = 1 ; // initially all 1 in row = 0 ;
			}
			else if (j==0){
				arr[i][j] = 1 ; // initially all 1 in column = 0;
			}
			else {
				arr[i][j] = arr[i][j-1] + arr[i-1][j] ;  // left grid and exactly above grid 
			}
			
		}
	}
	cout << arr[n-1][n-1] << endl;
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
