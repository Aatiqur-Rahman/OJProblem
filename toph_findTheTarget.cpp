#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll>v;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){

    fasterio();
    int t;cin>>t ;
    while (t--) {
        ll n,x;cin>> n >> x;
        bool flag=false;
        for (int i = 0 ;i<n;i++) {
            int data;cin >> data;
            v.push_back(data);
            if (data==x){
                flag=true;
            }
        }
        if (flag==true){

        }
        else {
            for (int i = 0;i<v.size();i++) {
                for (int j = i+1;j<v.size();j++) {
                    if ((v[i]^v[j])==x){
                        flag=true;
                        j=v.size();i=v.size();
                    }
                }
            }
        }
        if (flag==true){cout << "Yes" << endl;}
        else {cout << "No" << endl;}


    }

    return 0;
}
