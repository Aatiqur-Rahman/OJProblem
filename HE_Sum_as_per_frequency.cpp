#include <bits/stdc++.h>
#define MAXN 1000001
using namespace std;
long long int arr[MAXN];
int main(){
    memset(arr,0,sizeof (arr));
    int n;
    scanf("%d",&n);
    int j=n;
    while (n--){
        long long int data;
        scanf("%lld",&data);
        ++arr[data];

    }
    int q;
    scanf("%d",&q);
    while (q--){
        long long int sum=0;
        int a,b;
        scanf("%d %d",&a,&b);
        for (int i=a;i<=b;i++){
            int freq=arr[i];
            freq*=i;
            sum+=freq;
        }
        cout << sum << endl;
    }
    return 0;
}
