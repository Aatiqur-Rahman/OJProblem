#include <bits/stdc++.h>
using namespace std;
vector <int> v;
void bigFact(int n){
    v.push_back(1);
    for(int i = 1 ;i<=n;i++){ /** loop for the given numebr **/
        //cout << endl;
        long long int mul = 0;
        int s = v.size();
        //cout << "size : " << s << endl;
        for (int j = 0; j<s;j++){
            mul = mul+i*v[j];
            //cout << "mul : " << mul << endl;

            if (mul>9){
                int temp = mul%10;
                mul /=10;
                v[j]=temp;
                if (j==v.size()-1){
                    v.push_back(mul);
                }
            }

            else {
                v[j]=mul;
                mul=0;
            }
        }

    }
}

int main(){
    int n;cin >>n;
    //memset(arr,1,sizeof(arr));
    bigFact(n);
    for(auto i : v ){cout << i << " ";}
    cout << endl;
    return 0;
}
