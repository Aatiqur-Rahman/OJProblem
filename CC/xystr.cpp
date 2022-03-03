
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str;
	cin >> str;
	int cnt = 0 ;
	for (int i = 1;i<str.size();i+=1){
		if (str[i]=='x'){
			if (str[i-1]=='y'){cnt++;i++;}
		}
		else {
			if (str[i-1]=='x'){cnt++;i++;}
		}
	}
	cout << cnt << endl;
}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in.txt","r",stdin);
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
