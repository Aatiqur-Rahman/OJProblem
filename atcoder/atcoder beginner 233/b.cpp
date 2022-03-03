#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b ;cin >> a >>b;
    a-=1;b-=1;
    string str;
    cin >> str;
    int s = str.size();
    for (int i = 0 ;i < s;i++){
        if (i!=a){
            cout << str[i] ;
        }
        else {
            i=b;
            while (b>=a){
                cout << str[b];
                b--;
            }

        }
    }
    return 0;
}
