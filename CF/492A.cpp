
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;//number of cubes given
	cin >> n;
	int cnt = 0 , sum = 0 , i  = 1 ; 
	while (sum<=n){
		int temp = i*(i+1)/2; // sum of natural numbers 
		sum+=temp; //sum of total cubes 
		i++;
		cnt++; // maximum height 
	}
	cout << cnt-1 << endl;
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
