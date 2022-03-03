#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
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
    int n,x,y;cin >> n >> x >> y;
    if (n&1){
        if (x!=y){cout << "No" << endl;}
        else {
            if (x&1){
                    cout << "Yes" << endl;
                for (int i=1;i<=n*2;i+=2){
                    cout << i << " ";
                }
                cout << endl;
            }
            else {
                cout << "Yes" << endl;
                for (int i=2;i<=n*2;i+=2){
                    cout << i << " " ;
                }
                cout << endl;
            }
        }
    }
    else {
        if (x==1 && y==1){
            cout << "No" << endl;
        }
        else {
            if (x==y){
                cout << "Yes" << endl;
                for (int i =2;i<=n*2;i+=2){
                    cout << i << " ";
                }
                cout << endl;
            }
            else {
                cout << "Yes" << endl;
                if (x==0){
                    for (int i=1;i<n*2;i+=2){
                        cout<< i << " ";
                    }
                    cout << endl;
                }
                else {
                    for (int i=2;i<n*2;i+=2){
                        cout<< i << " ";
                    }
                    cout << n*2-1;
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
