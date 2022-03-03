#include<bits/stdc++.h>

using namespace   std;


void fasterio(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}
void solve(){
	long long  sum=0,m=INT_MIN;
	for (int i=0;i<3;i++){
		int a,b;cin >> a >> b;
		sum = a+b;
		if(sum>m)m=sum;
	}
	cout << m << endl;

}
int main(){ fasterio();
/*#ifndef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif*/

    int t=1;
    cin >> t;
    while (t--)solve();




/*#ifndef ONLINEJUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif*/

   return 0;
}
