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
    //freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}

int main (){
    //fasterio();
    w(t){
        ll sum1=0,sum2=0;
        int a , b , c;cin >> a >> b >> c;sum1=a+b+c;
        int d , e , f;cin >> d >> e >> f;sum2=d+e+f;
        if (sum1==sum2){
            if (a>d){
                cout << "Dragon" << '\n';
            }
            else if (d>a){
                cout << "Sloth" << '\n';
            }
            else if (b>e){
                cout << "Dragon" << '\n';
            }
            else if (e>b){
                cout << "Sloth" << '\n';
            }
            else if (c>f){
                cout << "Dragon" << '\n';
            }
            else if (f>c){
                cout << "Sloth" << '\n';
            }
            else {
                cout << "Tie" << '\n';
            }
        }
        else {
            if (sum1>sum2)cout << "Dragon" << '\n';
            else {
                cout << "Sloth" << '\n';
            }
        }
    }
    return 0;
}
