#include <bits/stdc++.h>
#define ll long long
#define w(t) int t;cin >>t ;while(t--)
#define pb(x) push_back(x)
#define in(x) insert(x)
#define MAXN 10000001
#define memset(x) memset(arr,x,sizeof(arr)

using namespace std;
/** Data Structure
vector <int> v;
set <int> s;
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
    //fasterio();
    char name [100000];
    scanf("%[^z]",&name);
    bool flag=true;
    for (int i=0;i<strlen(name);i++){
        if (name[i]=='"' && flag==true){
            cout << "``" ;
            flag=false;
        }
        else if (name[i]=='"' &&flag==false){
            cout << "''" ;
            flag=true;
        }
        else {
            cout<< name[i];
        }

    }
    return 0;
}
