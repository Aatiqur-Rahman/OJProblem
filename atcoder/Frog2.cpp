#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001

using namespace std;
/** Data Structure */
vector <int> v;
set <int> s;
unordered_set <int> us;
int arr[MAXN];
int dp[MAXN];

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}
void solve(){
}
int solve_i(int res){

    return res;
}
int minStep(int n){
    if (n==0){dp[n]=0;return dp[0];}
    if (n==1){dp[n]=abs(arr[1]-arr[0]);return dp[1];}
    if (dp[n]!=0){
        return dp[n];
    }
    int sub1  = minStep(n-1)+abs(arr[n]-arr[n-1]);
    int sub2 = minStep(n-2)+abs(arr[n]-arr[n-2]);
    dp[n] =  min(sub1,sub2);
    return dp[n];
}
int minStepBU(int n,int k){
    dp[0]=0;
    dp[1]=abs(arr[1]-arr[0]);
    for(int i = 2;i<=n;i++){
            dp[i]=INT_MAX;
            for (int j=1;j<=k;j++){
                    cout<<i-j << " " ;
                if(dp[i-j]+abs(arr[i]-arr[i-j]) < dp[i]){
                    dp[i] = dp[i-j]+abs(arr[i]-arr[i-j]);
                }
            }cout << endl;
    }
    return dp[n] ;
}

int main (){
    fasterio();
    int n;cin>> n;
    int k ; cin >> k;
    for (int i=0;i<n;i++){
        //int data= rand();
        //arr[i]=data;
        cin >> arr[i] ;
    }
    cout<< minStepBU(n-1,k)<< "\n";
    return 0;

}
