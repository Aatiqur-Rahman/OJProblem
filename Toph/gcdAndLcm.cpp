#include<bits/stdc++.h>
using namespace    std;
void fasterio(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}
void solve(){
	int a,b;cin>> a >> b;
	int gcd = __gcd(a,b);
	int lcm = (a*b)/gcd;
	cout << gcd << " " << lcm << endl;
	if (a+b==lcm+gcd){
		cout << "true" << '\n';
	}
	else {
		cout << "false" << '\n';
	}

}
int main(){ fasterio();

    int t=1;
    cin >> t;
    while (t--)solve();

   return 0;
}
