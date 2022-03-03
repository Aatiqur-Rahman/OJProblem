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
    fasterio();
    string str;cin>>str;
    for (int i =0;i<str.size();i+=2){
        v.push_back(str[i]-'0');
    }
    sort(v.begin(),v.end());
    for (int i =0;i<v.size();i++){
        if (i!=v.size()-1)
            cout<< v[i] << "+";
        else {
            cout << v[i] << endl;
        }
    }

    return 0;
}
