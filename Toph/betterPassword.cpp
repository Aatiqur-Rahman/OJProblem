
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str;cin >> str ;
	for (int i= 0 ;i<str.size();i++) {
		if (i==0){
			printf("%c",str[i]-32);
		}
		else if (str[i]=='o'){
			printf("()");
		}
		else if (str[i]=='i') {
			printf("!");
		}
		else if (str[i]=='s') {
			printf("$");
		}
		else {
			printf("%c",str[i]);
		}

	}
	printf(".\n");
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
