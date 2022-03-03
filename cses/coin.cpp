#include <bits/stdc++.h>
using namespace std;
long long  minn[1000001];

int minCoins(int taka,int coins[],int t){
    for (int i= 1;i<=taka;i++){
        minn[i]=INT_MAX;
        for (int j=0;j<t;j++){
            if (i-coins[j]>=0 && (minn[i-coins[j]])+1 < minn[i]){
                minn[i] = (minn[i-coins[j]])+1;
            }
        }
    }
    return minn[taka];
}
int main()
{
    int coins[101];
    int n,taka;cin>> n >> taka;
    for (int i =0;i<n;i++){
        cin>> coins[i];
    }
    if (minCoins(taka,coins,n)!=INT_MAX)cout << minCoins(taka,coins,n) << '\n';
    else {cout << "-1" << '\n';}
    return 0 ;
}
/**
Set Min[i] equal to Infinity for all of i
Min[0] = 0

For i = 1 to S
For j = 0 to N - 1
If(Vj <= i AND Min[i - Vj] + 1 < Min[i])
Then Min[i] = Min[i - Vj] + 1

Output Min[S]
*/
