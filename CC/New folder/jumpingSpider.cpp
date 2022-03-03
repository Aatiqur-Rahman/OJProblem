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
    w(t){
        int n,k;cin>> n>>k;
        int step=0;
        while (n){
            if (k<n){
                n-=k;
            }
            if (1<=n){n-=1;}
            step++;
        }
        cout  <<  step << endl;
    }
    return 0;
}
