#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001
#define memset(x) memset(arr,x,sizeof(arr)

using namespace std;
/** Data Structure */
vector <int> v;
/*set <int> s;
unordered_set <int> us;
int arr[MAXN];*/

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
    ll A=1,B=1;
    int n,m;cin>>n >> m;
    for (int i=0;i<n;i++){
        ll data;cin>> data;
        A*=data;
    }
    for (int i=0;i<m;i++){
        ll data;cin >>data;
        B*=data;
    }
    cout<< "A : " << A << "B : " << B << endl;
    ll res = __gcd(A,B);
    if (res>999999999){
        int i=9;
        while (i){
            v.push_back( res%10 ) ;
            res/=10;
            i--;
        }
        reverse(v.begin(),v.end());
        for (auto i : v){
            cout<< i;
        }
        cout<< endl;
    }
    else {cout<< res << endl;}
    return 0;
}
