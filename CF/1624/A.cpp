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
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}

int main (){
    fasterio();
    w(t){
        int n;cin>> n;
        int mi = INT_MAX;
        int ma = INT_MIN;
        for (int i =0;i<n;i++){
            int data; cin >> data;
            if (data<mi){mi=data;}
            if (data>ma){ma=data;}
        }
        cout << ma-mi << endl;
    }
    return 0;
}
