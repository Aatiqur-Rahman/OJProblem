
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

void solve(){
	int q;cin >> q;
	while (q--){
		int in , round , res;
		cin >> in  >> round >> res;
		if (in==1 && round&1==1){
			if (res==1){
				cout << round/2 << endl;
			}
			else {
				cout << round/2+1 << endl;
			}
		}
		else if (in==2 && round&1==1){
			if (res==1){
				cout << round/2+1 << endl;
			}
			else {
				cout << round/2 << endl;
			}
		}
		else{
			cout << round/2 << endl;
		}
	}


}

int main(){
	fasterio();
/*#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif*/

	int c =1;
	cin >> c ;
	while (c--)solve();

/*#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif*/

	return 0;
}
