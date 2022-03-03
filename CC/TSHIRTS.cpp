
#include <bits/stdc++.h>
#define fast_io ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define mod 1000000007

using namespace std;

bool ID [ 101 ] = {true};
int dp[1<<10][101] ;



int calculate ( int i , vector <int > v[] , int mask , int person , vector <bool> & ID ) {
    //cout << "ith person and total person : " << i  << " and " << person << endl;


	if ( i == person ) {

		return 1;
	}

	// memoization

    if ( dp[mask][i] != 0 ) {
            cout << "returned : " << dp [mask][i] << endl;
            return dp[mask][i] ;
    }



	int ways = 0 ;

	for ( auto j : v[i]) {

        cout << "shirts : " << j << "  " << ID[j] << endl;


		if ( ID [j] == true and ( mask & ( 1 << i) ) != 0 ){

			ID[j] = false ;

			ways += calculate ( i+1 , v , mask^(1 << i) , person , ID ) % mod ;


			ID[j] = true ;

		}
	}

	return dp[mask][i] =  ways ;

}

void solve(){

	int n ; cin >> n  ; // number of peoples

	//vector < vector < int > > v = {{1,2,5},{6},{7,8,9}};

	vector <int > v[n] ;
	vector < bool > ID (101 , true ) ;

	for ( int i = 0 ; i < n ; i ++ ){// taking input till new line
		int value ;
		char c ;

		do {
            scanf("%d%c",&value,&c);

            v[i].push_back(value);

            if ( c == '\n' ){
                break ;
            }

		}
		while (true) ;

	}


    cout << calculate ( 0 , v , ( 1 << n ) -1  , n , ID ) << endl; ;

    /*for ( int i = 0 ; i < 13 ; i ++ ){
        cout <<  i << ": " ;
        for ( int j = 0 ; j <= mask ; j ++ ){
            cout << dp[i][j] << " " ;
        }
        cout << endl;
    }*/



}

int main(){

	//fast_io
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
