#include <bits/stdc++.h>
#define ll long long
using namespace std;
/** rectangle **/
int main () {
    int t; cin >> t;
    while (t--){
        ll a,b,c,sum=0;
        cin >> a >> b >> c;
        sum=a+b+c;
        if (sum&1==1){
            cout << "No" << endl;
        }
        else {

            if (a!=b && b!=c && a!=c){
                int m1 = max(a,b);int m2=max(b,c);
                int m = max(m1,m2);
                int m3=sum-m;
                if (m3==m){
                    cout << "Yes" << endl;
                }
                else {cout << "No" << endl;}
            }
            else if (a!=b && b!=c){
                cout << "Yes" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
