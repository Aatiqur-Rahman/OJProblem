
#include <bits/stdc++.h>
#define endl '\n' 
#define int long long 
#define N 100000

using namespace std;
int dp[N] ; 
vector < int > s (200 ,  true ) ;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void sieve () {

    s[1] = false ; 
     
    for (int i = 2 ; i < 200 ; i ++ ){
        if (s[i] ==  true )
        for ( int j = i+1 ; j < 200 ; j ++ ){
            if ( j % i  ==  0 ){
                s[j] = false ; 
            }
        }
    }
}

void solve(){

    int a , b , c , d ; cin >> a >> b >> c >> d ;

    sieve () ; 
    bool flag = true ; 

    for ( int i = a ; i <= b ; i++ ){
                flag = false ;
                for ( int j = c ; j <=  d ; j++ ) { 
                        if ( s [i + j] ==  true ) {
                            flag = true ;
                            break ;
                        } 

                }
                if (flag ==  false ) break ;
    }

    cout << ( flag ? "Aoki" : "Takahashi" ) << endl; 
	
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
