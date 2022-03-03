#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){


    int t ; cin >>t ;


    while (t--){


        ll n;

        cin >> n;

        ll temp = n;

        int counter =  0;

        for (int i = 2 ; i<=n;i++){ // cubes within  given number 

            ll res = i*i*i;

            if (res<=n){

                counter++;

            }

            if( res > n ){ break; }

            int sqrt_value_of_res =  sqrt(res);

            if(sqrt_value_of_res*sqrt_value_of_res==res){ // 8*8 = 64 and 4*4*4 = 64 , so one decreases

                counter--;
            }
        }

        temp = sqrt ( temp ) ; // squares within given number 

        cout << temp+counter << endl; // total squares and cubes within given number 
 
    }

    return 0;
}
