#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t ; cin>> t;
    while (t--){
        int n;
        cin >> n;

        if ((n&1)){
            if (n%3==0){
                cout << "3" << endl;
            }
            else {
                cout << n << endl;
            }
        }
        else {
            cout << "2" << endl;
        }
       /** s.insert(n);
        s.insert(1);
        for (int i = 2;i<=sqrt(n);i++){
            if (n%i==0){
                s.insert(i);
                s.insert(n/i);
            }
        }
        if (n==1){
            cout << 1 << endl;
        }
        else {
            auto it = s.begin();it++;
            cout << *it << endl;
        }
        s.clear();**/
    }
    return 0;
}
