#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    int t;cin>>t ;
	while (t--){
        ll sum = 0;
	    ll n;cin >>n ;
        if (n==1){cout << 2 << endl;}
        else {
            n*=2;
            sum = ((n+1)*n)/2;
            cout << sum << endl;
        }
	}
    return 0;
}
