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
    w(t){
        int data;cin>>data;

        if(data==3 || data==9 || data==11 || data == 111 || data == 1111 || data== 11111 || data == 111111)cout << "YES" << endl;
        else if (data>32){data%=32;if (data%9==0 || data%27==0)cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}
