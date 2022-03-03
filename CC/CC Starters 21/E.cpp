#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> v;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){

    fasterio();
    int t;cin>> t;
    while (t--){
        int n,m;
        cin>> n >> m;
        v.clear();
        if (m<2){cout << 0 << endl;}
        else if (m==2){cout << 1 << endl;}
        else {
            if (n&1){
                if (n==1){cout << "1" << endl;}
                else {
                    int temp = sqrt(n);
                    if (temp*temp==n){
                        cout << temp << endl;
                    }
                }
            }
            else {
                if (n<m){
                    cout << n/2 << endl;
                }
                else {

                }

            }
        }
        for (auto i : v){cout << i << " " ;}cout << endl;
    }
    return 0;
}
