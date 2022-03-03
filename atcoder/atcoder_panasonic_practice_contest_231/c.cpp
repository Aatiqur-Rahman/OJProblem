
#include <bits/stdc++.h>

using namespace std;

vector < int > v ;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

int search ( int s , int e , int data ) {

    if ( data > v[v.size()-1] || data < v [0] ) {
        return  0 ;
    }


    int ans = 0 ;    // trivial answer 

    while ( s<=e ) {

       int  mid =  ( s+e ) / 2 ;

        if ( v[mid] == data ) {

            return ( e - mid )+1 ; 

        } 

        else if ( v[mid] < data ) {

            s= mid+1 ;
            ans = mid ;

        }

        else {

            e=mid-1 ;
            ans = mid ; 
        }

    }

    return ans ; 

    

}


void solve(){

    int n , q ; cin >> n >> q; // number of elements and queries    
    v.clear() ; 
    for ( int i = 0 ; i < n ; i++ ) {
        int data ; cin >> data ; 
        v.push_back (data) ;
    }
    sort ( v.begin() , v.end() ) ;

    for ( int i = 0 ; i < q ; i++ ) {
        int Q ; cin >> Q ;

        cout << search( 0 , n-1 ,  Q ) << endl; ; 

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
   // cin >> c ;
    while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

    return 0;
}
