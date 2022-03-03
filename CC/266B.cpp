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
    int n,k;cin >> n >> k;
    string str;cin >> str;
    for (int i =0;i<k;i++){
        for (int j=0;j<n;j++){
            if (str[j]=='B' && j!=str.size()-1){
                if (str[j+1]=='G'){

                    char temp = str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                    j++;
                }
            }
        }
    }
    cout << str << endl;
    return 0;
}
