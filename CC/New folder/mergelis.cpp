
#include <bits/stdc++.h>

using namespace std;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){

	int n1 , n2 ; cin >> n1 >> n2 ;

	int cnt1 = 0 , cnt2 = 0 ;  


	int data1 ; cin>> data1 ;

	v1.push_back(data1 ) ; 

	for ( int i = 1 ; i < n1 ; i ++) {

		int data2 ;cin >> data2 ;

		if (data2 > = data1 ) cnt1++ ; 

		v1.push_back(data2) ; 

		data1 = data2;
	}

	cin>> data1 ;
	v2.push_back (data1)
	for ( int j = 1 ; j < n2 ; j++ ) {
		
		int data2 ; cin >>  data2 ;

		if (data2 > = data1 ) cnt2++ ; 

		v2.push_back(data2) ; 

		data1 = data2;
		
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
