
#include <bits/stdc++.h>
#define int long long 
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
        int n , x  ; cin >> n >> x ; 
        //vector < pair < int , int > > vii (n) ; 
        map < int , int > m  ; 
        for ( int ii  = 0 ; ii < n ; ii++ ){

                int data ; cin >> data; 
                if ( data < x ){
                        m[data] += 1 ; 
                }
                else {
                    while  (data % x == 0 ){
                        data /= x ;
                    }
                    cout << "idx :  " << data << endl; 
                    m[data] +=  1 ; 
                }
        }  

        int cnt = 0 ; ; 
        cout << " map " << endl; 
        for ( auto i : m ){
                cout << i.first << " " << i.second << endl; 

                if (x % 2 == 0 )
                    if ( i.second % 2  != 0 ) {
                            cnt ++ ; 
                    }
        } 
        cout << cnt << endl; 

	
}

int32_t main(){
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
