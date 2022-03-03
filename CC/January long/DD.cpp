#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001
#define memset(x) memset(arr,x,sizeof(arr)

using namespace std;
/** Data Structure */
vector <int> v;
vector <int> data;
vector <int> arr;
/*set <int> s;
unordered_set <int> us;
int arr[MAXN];*/

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
        int n,x;
        cin >> n >> x;
        int temp = n;

        v.clear();
        while (temp){
            v.push_back(temp&1);
            temp = temp>>1;
        }

        data.clear();
        for (int i=0;i<v.size();i++){
            if (v[i]==1){
                int value = v[i]<<i;
                data.push_back(value);
            }
        }

        arr.clear();
        for (int i = 0;i<data.size();i++){
            int value = n-data[i];

            if (value !=0)arr.push_back(value);
        }
        for (int i=0;i<data.size();i++){
            arr.push_back(data[i]);
        }
        sort(arr.begin(),arr.end());
            int cnt=x/arr[arr.size()-1];
            cout << "counter : " << cnt << endl;
            x%=arr[arr.size()-1];
            cout << "sum : " << x << endl;
            int j=arr.size()-2;
            while (x>0 && j>=0){
                while (x-arr[j]>=0){
                    x-=arr[j];
                    cnt++;
                }
                j--;

             }
             if (x>0){
                cout << "-1" << endl;
             }
             else {cout << cnt << endl;}

    }

    return 0;
}
