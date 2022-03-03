#include <bits/stdc++.h>
#define ll long long
#define MAXN 100000001

using namespace std;
int arr[MAXN];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

int solve(ll n){
    cout << n << endl;
    if (n==1){arr[n]=0;return arr[n];}
    if (arr[n]!=0){
        return arr[n];
    }
    if (n&1){
        return solve(n*3+1)+1;
    }
    else {

        return solve(n/2)+1;
    }
    //arr[n]=cnt;


}
void solveBU (int n){
    arr[1]=0;
    arr[2]=1;
    for (ll i=3;i<=n;i++){
        int cnt=0;
        ll j = i ;
        while (j!=1){
            if (j&1){
                j=j*3+1;
                cnt++;
            }
            else {
                j/=2;
                cnt++;
            }
        }
        arr[i]=cnt;

    }
}


int main (){//fasterio();
/*#ifndef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif*/

    solveBU(10000);
    int a, b ;
    while (scanf("%d %d", &a, &b) == 2){
        int m=INT_MIN;
        int limit;
        int initial;
        if(a>b){
            limit=a;
            initial=b;
        }
        else {
            initial= a;
            limit=b;
        }
        for (int i=initial;i<=limit;i++){
            if (arr[i]>m){m=arr[i];}
        }
        cout << a << " " << b << " "  << m+1 << endl;
    }



/*#ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif*/

    return 0;
}
