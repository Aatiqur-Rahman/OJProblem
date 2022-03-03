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

        int a , b , c;cin >> a >> b >> c;
        int mi = min(min(a,b),c);
        int ma = max(max(a,b),c);
        int mid = a+b+c-ma-mi;

        if (a==b && b==c) {cout << "YES" << '\n' ; }
        else if (a==b || b==c || a==c){
            if (a==b){
                int temp = mi+mid;

                if (mid>mi){
                    cout << "YES" << '\n';
                }
                else if (ma-temp==mi)cout << "YES" << '\n';
                else {cout << "NO" << '\n';}
            }
            else if (b==c){
                int temp = mi+mid;
                if (mid>mi){
                    cout << "YES" << '\n';
                }
                else if (ma-temp==mi)cout << "YES" << '\n';
                else {cout << "NO" << '\n';}
            }
            else {
                cout << "YES" << endl;
            }

        }
        else {

            if ((ma-mid)%mi==0){
                cout << "YES" << '\n';
            }
            else {cout << "NO" << endl;}
        }

    }
    return 0;
}
