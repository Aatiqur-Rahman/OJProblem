#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t ;cin >> t;
    while (t--){
         ll n;cin >> n;
         bool flag=true;
         for (int i = 2;i<=sqrt(n);i++){
            if (n%i==0){
                cout << "NO" << endl;
                flag=false;
                i=sqrt(n)+1;
            }
         }
         if (flag==true){cout<< "YES" << endl;}

    }
    return 0;
}
