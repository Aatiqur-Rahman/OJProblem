
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
    int t;cin >>t;
    while (t--) {

        int n;cin >>n;
        int m = INT_MIN;
        //int data1;cin >>data1;
        v.clear();
        for (int i =0;i<n;i++) {

            int data; cin >>data;
            //data1&=data;
            //value |=data1;
            //if (data1>m){m=data1;}
            v.push_back(data);
        }
        sort (v.begin(),v.end());
        int data=v[v.size()-1]&v[v.size()-2];
        int value = 0;
        for (int i = v.size()-2;i>=0;i--) {


        }
        cout << (value|m) << endl;
        /** int data=v[v.size()-1];
        int value = 0;
        for (int i = v.size()-2;i>=0;i--) {
            data&=v[i];
            value |=data;
            //if (data>m)m=data;
        }
        cout << value << endl;**/
    }
    return 0;
}
