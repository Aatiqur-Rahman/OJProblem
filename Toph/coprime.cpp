#include <bits/stdc++.h>
#define ll long long

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}

int coPrime(int n){
    int cnt= 0;
    for (int i=2;i<=n;i++){
        if (n%i==0 && arr[i]==0){
            arr[i]=1;
            for (int j=2*i;j<=n;j+=i){
                    arr[j]=1;

            }
        }
    }
    for (int i=1;i<=n;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
    return cnt;
}

int main (){fasterio();
    
    int n;cin>>n;
    cout<< coPrime(n) << endl;
    return 0;
}
