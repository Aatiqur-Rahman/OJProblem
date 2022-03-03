
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
set <int> s;
unordered_set <int> us;
int arr[MAXN];

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

int main (){
    fasterio();
    w(t){

        int n;cin>>n;int temp =n;
        int sum =0;
        v.clear();
        while (temp){
                int data; data=temp%10;
            sum+=data;
            v.push_back(data);
            temp/=10;
        }
        if (sum%4==0){
            cout<< n << endl;
        }

        else {
            int i=0;
            while(sum%4!=0){
                if(v[i]==9){
                    v[i]=0;
                }
                else {
                    v[i]+=1;
                }
                if (v[i]==0){int j=i+1;
                    while(v[j]==9 && j<v.size()){
                        v[j]=0;
                        j++;
                    }
                    if (j==v.size()){
                        v.push_back(1);
                    }
                    else {
                        v[j]+=1;
                    }
                }
                sum=0;
                for (auto i : v){
                    sum+=i;
                }
            }
            reverse(v.begin(),v.end());
            for (auto i : v){
                cout << i ;
            }
            cout << endl;
        }

    }

    return 0;
}
