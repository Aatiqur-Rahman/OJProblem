
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string a,b;cin >> a >> b ;
	int cnt = 0 ;
	for (int i = 0; i<a.size();i++){
		for (int j = 0;j<b.size();j++){
			if (a[i]==b[j]){
				b[j]='0';
				cnt++;
			}
		}
	}
	if (cnt == a.size()){
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
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
	//cin >> c ;
	while (c--)solve();

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
