
#include <bits/stdc++.h>

using namespace std;
unordered_set <int> s;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	s.clear();
	int n , cost ; cin >> n >> cost ;
	int cnt = 0;
	for (int i=0;i<n;i++){
		int data ;cin >> data; 
		if (s.find(data)==s.end()){
			s.insert(data);
		}
		else {
			cnt++ ;
		}
	}
	if(cost==1 ){
		cout << cnt*cost+1 << endl;
	}
	else if(cnt==0){
		cout << cost << endl;
		
	}
	else {
		cout << cost+cnt+1 << endl;
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
