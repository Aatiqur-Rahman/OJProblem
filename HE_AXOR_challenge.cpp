#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int > v;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
int main (){
    ll n;cin >>n;
    int num_bits;
    ll cn = n;
    ll num1=0,num2;
    while (cn>0){ /** calculating number of bits **/
        if ((cn&1)==0){
            v.push_back(1);
        }
        else {
            v.push_back(0);
        }
        cn=cn>>1;num_bits++;
    }
    v[v.size()-1]=1;
    for (int i = 0 ;i<v.size();i++) {
        if (v[i]==1){
            num1+=(1<<i);
        }
    }
    num2=(1<<num_bits-1)-1;
    cout << num1*num2 << endl;
    return 0;
}
