#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int func(string str , int n , int k){
    int x=0;
    int ans = 0;
    for (int i =0;i<k;i++) {
        x ^= str[i]-'0';
        cout <<"xor value : " <<  x  << endl;
    }
    int indstart= 0;
    int indend=k;
    while (indend<n) {
        x^=str[indstart++]-'0';
        x^=str[indend++]-'0';
        cout <<" In while loop xor value : " <<  x  << endl;

    }
    return x;
}
int main (){

    //fasterio();
    int t;cin>> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        string s;cin >> s;
        cout << func(s,n,k) << '\n';
    }
    return 0;
}
