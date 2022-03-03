#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001
#define memset(x) memset(arr,x,sizeof(arr)
#define mod 1000000007

using namespace std;
/** Data Structure */
vector <int> v;
set <int> s;
unordered_set <int> us;
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
int solve_i(int n ){
    if(n==0) return 1;
    if (arr[n]!=0){
        return arr[n];
    }
    arr[n] = solve_i (n-1)%mod + solve_i(n-1)%mod;
    return arr[n] ;
}
int solution(int x){
    arr[0]=1;
    for(int i=1;i<=x;i++){
        arr[i]=arr[i-1]%mod + arr[i-1]%mod;
    }
    return arr[x] ;
}
int main (){
    fasterio();

        int n;cin>>n;
        cout << solution(n) %mod << endl;
        //cout << solve_i(n)%mod << '\n';

    return 0;
}
