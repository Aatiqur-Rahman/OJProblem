#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001
#define memset(x) memset(arr,x,sizeof(arr)

using namespace std;
;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}


int main (){
    fasterio();


    double area, side ; cin>> area >> side ;

    area /= 2;

    double res = ( area*1.0 ) / ( side * 1.0 ) ;

    printf ( "%0.2lf\n", res ) ;

    return 0;
}
