#include <bits/stdc++.h>
#define MAXN 100000008
using namespace std;
int a, b, c, d, e, f;
int arr[MAXN];
long long int fn(int n) {
    uint64_t sum  = 0;
    if (n==0)return a;
    if (n==1)return b;
    if (n==2)return c;
    if (n==3)return d;
    if (n==4)return e;
    if (n==5)return f;
    if (arr[n]==0){
        sum=fn(n-1)% 10000007+fn(n-2)% 10000007+fn(n-3)% 10000007+fn(n-4)% 10000007+fn(n-5)% 10000007+fn(n-6)% 10000007;
        arr[n]=sum;
        //cout << arr[n] << " n : " << n << endl;
        return arr[n];
    }
    return arr[n];
}
int main() {
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(arr,0,sizeof(arr));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
