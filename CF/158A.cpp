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
    int cnt = 0;
    int n,k;cin>>n>>k;
    for (int i =0;i<n;i++){
        int data; cin >> data;
        v.pb(data);
    }
    if (v[k-1]>0){
        cnt+=k;
        for (int i =k ;i<n;i++){
            if (v[i]==v[k-1]){cnt++;}
            else {i=n;}
        }
        cout << cnt << endl;
    }
    else {
        for (int i=0;i<k;i++){
            if (v[i]>0)cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
