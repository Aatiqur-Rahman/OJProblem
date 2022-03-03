#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
ll solve(int z,int n){
    ll sum=0;
    int temp ;
    for (int i=1;i<=z;i++){
        if (i>1){temp = sum;}
        else {temp = n;}
        sum=0;

        for (int j=1;j<=temp;j++){
            sum+=j;
        }
    }
    return sum ;
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    w(t){
        int z,n;
        cin>> z >> n;
        cout << solve (z,n) << '\n';
    }
    return 0;
}
