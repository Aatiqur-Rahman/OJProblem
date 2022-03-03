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
    //freopen("in.txt",r,stdin);
    int n;cin>>n;
    for (int i=0;i<n;i++){
        int data;cin >>data;
        v.push_back(data);
       // v.push_back(rand());
    }
    sort(v.begin(),v.end());
    ll ans=INT_MIN;
    int j =0;
    for (int i=v.size();i>0;i--){
        //cout << "data : "<< v[j] << '\n';
        if (v[j]*i>ans){
            ans=v[j]*i;

        }
        j++;
    }
    cout << ans << endl;
    return 0;
}
