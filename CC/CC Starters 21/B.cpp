#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){

    fasterio();
    int t;cin>> t;
    while (t--) {
        int r,c;
        cin >> r >> c;
        int cnt  =0 ;
        for (int i =1;i<=r;i+=2) {
            for(int j =1;j<=c;j+=2) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
