#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int n;cin >>n;
    while (n--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a>=b){
            b+=c;
        }
        else{
            a+=c;
        }
        if (a>=b){
            b+=d;
        }
        else {
            a+=d;
        }
        if (a>=b){
            cout << "N" << endl;;
        }
        else {
            cout << "S" << endl;
        }


    }
    return 0;
}
