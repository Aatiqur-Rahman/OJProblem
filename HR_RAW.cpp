#include <bits/stdc++.h>
#define ll long long
#define MAXN 10000
#define w(t) int t;cin >>t ;while(t--)

using namespace std;

ll arr[MAXN];
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(){
}
ll solve_i(ll boundary){
    ll sum =0;
    arr[0]=0;
    arr[1]=2;
    sum=arr[0]+arr[1];
    int i =2;
    while (true){

        if (arr[i]==0)arr[i]+=4*arr[i-1]+arr[i-2];
        if (arr[i]>boundary){
            break;
        }
        if (arr[i]==boundary){
            sum+=arr[i];
            break;
        }
        sum+=arr[i];
        i++;
    }
    cout << i << endl;
    return sum ;
}

int main (){
    fasterio();
    memset(arr,0,sizeof (arr));
    w(t){
        ll n;cin >>n;
        if (n<=1){cout << 0 << endl;}
        else {cout << solve_i(n) << endl;}

    }

    return 0;
}
