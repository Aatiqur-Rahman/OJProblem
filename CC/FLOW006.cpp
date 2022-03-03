#include <bits/stdc++.h>

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
    int t;cin >> t;
    while (t--){
        int data;
        cin >> data;
        int cnt = 0;
        while(data){
            int value = data%10;
            cnt+=value;
            data/=10;
        }
        cout << cnt << endl;
    }
    return 0;
}
