#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define N 10000005

using namespace std;
/** Data Structure */
vector<bool>sieve(N,true);
vector <int> v;
//set <int> s;
//unordered_set <int> us;
//int arr[MAXN];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}

void primeSieve(){
    sieve[0]= sieve [1]= false;v.push_back(0);
    //arr[0]=arr[1]=0;
    for (ll p=2;p<=N-1;p++){
        if (sieve[p]!=false){
            v.push_back(p);
            for (ll j=p*p;j<=N-1;j+=p){
                sieve[j]=false;
            }
        }

    }

}


/**void print (int left , int right){
    for (int i=left ;i<=right;i++){
        if (sieve[i]==true){
            cout << i << endl;
        }
    }
}**/

int main (){
    fasterio();
    primeSieve();
    int n;cin>> n;
    cout << v[n] << endl;
    return 0;
}
