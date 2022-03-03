#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
}
ll DP [MAXN];
ll solve(int en){
    if (en==0){
        DP[0]=a;
        return DP[0];
    }
    if (en==1){
        DP[1]=b;
        return DP[1];
    }
    if (en==2){
        DP[2]=c;
        return DP[2];
    }
    if (en==3){
        DP[3]=d;
        return DP[3];
    }
    else {
        if (DP[en]==0){
            DP[en]=DP[en-1];
            return DP[en];
        }
        else return DP[en];
    }
}
int main (){

    fasterio();

    return 0;
}
