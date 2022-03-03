#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)

using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    //cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}
int one(string s){
    for (int i=0;i<s.size();i++){
        if (s[i]=='1'){
            return i+1 ;
        }
    }
    return s.size();
}


int main (){
    fasterio();
    w(t){
        string str ; cin >> str;
        if (str.size()==1){
            cout <<  "NO" << '\n';
        }
        else {
            int pos = one(str);
            if (pos==str.size()){
                cout <<  "NO" << '\n';
            }
            else {
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}
