
#include <bits/stdc++.h>

using namespace std;
vector <int> v;
int dp[100001];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;cin>> n;
	v.clear();
	for (int i =0;i<n;i++){
		int data;cin >> data;
		v.push_back(data);
	}
	dp[v.size()-1]=1;
	for ( int i=v.size()-2 ; i>=0 ; i-- ){
		if (v[i]>0 && v[i+1]<0){
			dp[i] = dp[i+1] + 1 ;
		}
		else if (v[i]<0 && v[i+1]>0){
			dp[i] = dp[i+1] + 1 ;
		}
		else {
			dp[i] = 1 ;
		}

	}
	for ( int i = 0 ; i < n ; i++ ){
		cout << dp[i] << " " ;
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
