#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){

    fasterio();
    int t;cin>>t;
    while (t--) {
        int z,y,a,b,c;
        cin >> z >>y >> a >> b >> c;
        z-=y;
        if (z>=(a+b+c)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" <<endl;
        }
    }


    return 0;
}
