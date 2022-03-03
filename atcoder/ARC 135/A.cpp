
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 998244353
#define N 10000001


using namespace std;
int dp[N] ;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

int calculate ( int x ) {
	if ( x <= 4  ) return x ;
	if ( x < N ){
        if (dp[x] != 0 ) return   dp [x] ;
        else {
            if ( x&1 ) {
                int temp1 = calculate ( ( x+1 ) / 2 ) % mod ;
                int temp2 = calculate ( x/2 ) % mod ;

                return dp[x] = ( temp1 * temp2 ) % mod ;
            }
            else {
                int temp = calculate (x/2) % mod ;

                return dp [x] = ( temp * temp )  % mod ;
            }
        }
	}

	else {
            if ( x&1 ) {
                int temp1 = calculate ( ( x+1 ) / 2 ) % mod ;
                int temp2 = calculate ( x/2 ) % mod ;

                return ( temp1 * temp2 ) % mod ;
            }
            else {
                int temp = calculate (x/2) % mod ;

                return  ( temp * temp )  % mod ;
            }
	}



	//if ( x < N and dp[x] != 0 ) return dp[x] ;
	//else if ( x < N and dp[x] == 0) return dp[x] = ( calculate ( ceil ( x * 1.0 / 2 ) ) % mod ) * (  calculate ( floor ( x * 1.0 / 2 ) ) % mod  ) % mod  ;
	//else return ( calculate ( ceil ( x * 1.0 / 2 ) ) % mod ) * (  calculate ( floor ( x * 1.0 / 2 ) ) % mod  ) % mod  ;
}




void solve(){

	int x ; cin >> x ;


    cout << calculate (x) << endl;



}

int32_t main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif

	int c =1;
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

	return 0;
}
