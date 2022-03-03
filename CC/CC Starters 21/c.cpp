#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){

    fasterio();
    int t;cin >>t ;
    while (t--){
        int N , r,c ;
        cin >> N >> r >> c;
        int rc= N+1/2;
        int cc=N+1/2;
        int sum1=rc+cc;
        int sum2=r+c;
        if (sum1%2==0){
            if (sum2%2==0)cout << "0" << endl;
            else {cout << "1" << endl;}
        }
        else {
            if (sum2%2==1){
                cout << "0" << endl;
            }
            else {
                cout << "1" << endl;
            }
        }
    }
    return 0;
}
