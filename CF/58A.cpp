
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	string str; // string 
	cin >> str ; // input string 
	string str1 = "hello" ;  
	int cnt = 0 ; // counter for the given string 
	for (int i=0;i<str.size();i++){
		if (str[i]==str1[cnt]){
			cnt++;
		}
	}
	if (cnt == 5){
		cout << "YES" << "\n" ; 
	}
	else {
		cout << "NO" << "\n" ;
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
