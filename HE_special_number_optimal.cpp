#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001
#define memset(x) memset(arr,x,sizeof(arr)

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdin);
}

int main (){
    fasterio();
    w(t){
        int n;cin>> n;
        int temp = n;
        int sum=0;
        while (temp>0){
            int data;
            data=temp%10;

            sum+=data;
            temp/=10;
        }
        if (sum%7==0){
            cout << n << endl;
        }

        else{
            int t=n;
        cout << "data :" << t << endl;

            while (sum%7!=0){
               sum=0;
               while (t){
                    int data;
                    data=t%10;

                    sum+=data;
                    t/=10;
                }
                cout<< "sum  : "<<sum << endl;
                int add = 7-(sum%7);
                sum+=add;
                t+=add;
                t+=n;
                cout << t << endl;
            }
            cout << t << endl;
        }
    }
    return 0;
}
