#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){
    //fasterio();
    string s;cin >> s;
    int cnt= 0 ;
    for (int i = 0 ;i<s.size();i++) {
        if (s[i]=='B'){
            cnt++;
        }
    }
    if (cnt>=2){
        cout << "2B" << endl;
    }
    else {cout << "Not 2B" << endl;}
    return 0;
}
