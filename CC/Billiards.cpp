#include <bits/stdc++.h>
#define ll long long
#define MAXN 1000002
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
ll DP [MAXN];
ll Number(ll n) {
    if (n==1){
        DP[1]=0;return DP[1];
    }
    if (n==2){
        DP[2]=1;return DP[2];
    }
    if (n==3){
        DP[3]=1;return DP[3];
    }
    if (DP[n]==-1)
    {   DP[n]=Number(n-2)% 1000000009 + Number(n-3)%1000000009;
        return DP[n];
    }
    else return DP[n];
}

int main (){

    fasterio();
    int t;cin >>t ;
    memset(DP,-1,sizeof(DP));
    while (t--){
        ll n;cin>>n;
        cout << Number (n)%1000000009 << endl;
    }

    return 0;
}
