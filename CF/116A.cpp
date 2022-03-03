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
set <int> s;
unordered_set <int> us;
int arr[MAXN];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    int n;cin>> n;
    int m = INT_MIN;
    ll sum= 0 ;
    for (int i=0;i<n;i++){
        int a , b;cin>> a >> b;
        if (i==0){
            sum=b-a;
            if (sum>m){m=sum;}
        }
        else {
            sum=sum-a+b;
            if (sum>m){m=sum;}
        }
    }
    cout << m << endl;
    return 0;
}
