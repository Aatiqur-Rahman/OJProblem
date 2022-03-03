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
    int n,k,p;cin >>n >>k >>p;
    for (int i =0;i<n;i++) {
        int data;cin>>data;
        v.push_back(data);
    }
    for (int i = 0;i<p;i++) {
        int a,b;cin >> a >> b;
        a-=1;b-=1;
        if (abs(v[a]-v[b])<=k){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
