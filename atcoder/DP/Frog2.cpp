#include <bits/stdc++.h>
#define endl '\n' 
#define N 100001

using namespace std;
/** Data Structure */

int arr[N];
int dp[N];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}


int minStepBU( int n , int k ){

    if ( n == 1 )
        return 0 ;
    dp[0] = 0 ; 

    for( int i = 1; i < n ; i++ ){

            dp[i]=INT_MAX;


            for (int j=1 ; j <= k ; j++ ){

                if ( i-j >= 0 ) {

                    dp [ i ] = min ( dp[ i ] , abs ( arr[i] - arr [i-j] ) + dp [i-j] )  ; 
             
                }

            }
    }

    return dp[n-1] ;
}

int main (){
    fasterio();

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n;cin>> n;

    int k ; cin >> k;


    for (int i=0;i<n;i++){
        //int data= rand();
        //arr[i]=data;
        cin >> arr[i] ;

    }



    cout<< minStepBU(n,k) << endl;


    return 0;

}
