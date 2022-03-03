#include <bits/stdc++.h>
#define MAXN 1000001
using namespace std;
int main(){
    //int q;cin >> q;
    //while (q--){
        //int a=16 ,b=31;//cin >> a >> b;
        int a = 2 , b = 8;
        int ca =a , cb = b ;
        int num_b=0;
        while (cb>0){
            num_b++;
            cb=cb>>1;
        }
        //num_b-=2;cout << "number of bits : " << num_b << endl;
        b=(1<<num_b-2);
        cout << b << endl;
        int res = (a & -a);
        cout << "result : " << res << endl;
        int counter1 = 0;
        int counter2= 0;
        for (int i = a; i<=b;i++){
                //cout << "number : " << i << endl;
            //cout << (i&res) << " " << endl;;
            if ((i&res)==0)counter1++;
            else {counter2++;}
        }
        //cout << endl;
        //cout << counter1 << endl;
        cout << counter2*2-res << endl;
    //}
    return 0;
}
