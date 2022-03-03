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
ll solve_i(int people , int day){
    if (day==0)return 1;
    long long sum= 2;
    if (day==1){return 2;}
    else {
        for (int i =2;i<=day && sum<=people;i++){
            if (i>10){
                sum*=3;
            }
            else {sum*=2;}

        }
    }
    return sum;
}

int main (){
    fasterio();
    w(t){
        int people ,day;cin>>people >> day;
        ll res = solve_i(people ,day);
        if (res>people)cout << people << '\n';
        else {cout << res << '\n';}
    }

    return 0;
}
