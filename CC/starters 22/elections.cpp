
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int a , b ,c ; cin>> a >> b>> c;
	if (a>50){
		cout << "A" << endl;
	}
	else if  (b>50) {
		cout << "B" << endl;
	}
	else if (c>50 ) {
		cout << "C" << endl;
	}
	else {
		cout << "NOTA" << endl;
	}
}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c =1;
	cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
