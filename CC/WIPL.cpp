
#include <bits/stdc++.h>
#define N 100001

using namespace std;
int arr[N];
int dp [N];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n; // for number of boxes 
	cin>> n;
	int height ; // for height 
	cin >> height ;
	for (int i = 0 ;i<n;i++){	
		cin >> arr[i] ;
	}
	for (int i = 1 ; i <= height ; i++) {

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
