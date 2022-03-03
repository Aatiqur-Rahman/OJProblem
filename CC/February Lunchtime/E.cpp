
#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
 bool sorted ( vector <int > & v ) {
    for ( int i =1 ; i < v.size() ; i ++ ){
        if ( v [ i ] < v[ i -1 ] ){
            return false ; 
        }
    }
    return true ; 
}

void solve( ){

    int n; cin >> n;

    vector < int > v (n) ;
    string str ; 

    for ( int i = 0 ; i < n ; i ++ ){
            cin >> v[i] ;
    }
    cin  >> str ; 

    int cnt  = 0 ; 
    bool flag = true ; 

    for ( int i = 1 ; i < n ; i ++  ){

            if ( v [ i ] < v [ i -1 ] ) {
                    int j = i , k = i  ; 
                    while ( v [ k ] < v [ j - 1 ] and j > 0 ) {

                            cout << v[k] << " " << v[j-1] << endl; 


                            if ( ( str [ k ] == 'S' and str[ j-1 ] == 'N' ) || ( str[k] == 'N' and str[j-1] == 'S' ) )  { 

                                    swap ( v[k] , v[j-1]);

                                    cout << v[k] << " " << v[j-1] << endl; 

                                    swap ( str[k] , str[j-1]);

                                    cnt ++ ; 
                                    k-- ; 
                            }

                            j-- ; 




                    }    
                    

            }
    } 
    for ( auto i : v ){
        cout << i << " " ;
    }
    cout << endl ;
    cout << ( sorted ( v ) ? cnt : -1 ) << endl; 
 

    
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
