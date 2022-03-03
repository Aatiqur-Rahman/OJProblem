
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(int i){

	int n ; cin >> n ;
	float sum=0.0;
	for (int i =0 ; i<n ; i++ ){
		float data ; cin >> data; 
		sum+=data;
	}
	
	printf("Case %d: %.3f\n",i,sum/n);
}

int main(){
	fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

	int c = 1;
	cin >> c ;
	int i=1;
	while (c--){
		solve(i);
		i++;
	}

#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

	return 0;
}
