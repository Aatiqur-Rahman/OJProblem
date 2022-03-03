
#include <bits/stdc++.h>
#define N 1000001

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

void solve(){
	int data;
	int m=INT_MAX;
	while ( (scanf("%d",&data)) != EOF){
		if (data<m){
			m=data;
		}
	}
	cout << m << endl;
	//char str[N];
	//scanf("%[^z]",&str);

}

int main(){/*
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif*/

	int c =1;
	//cin >> c ;
	while (c--)solve();

/*#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif*/

	return 0;
}
