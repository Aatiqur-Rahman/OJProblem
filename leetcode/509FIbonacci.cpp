
#include <bits/stdc++.h>

using namespace std;
//using recursion
class Solution {
public:
	int ans = 0 ; 
	int fib(int n) {
		if(n==0 || n==1){
			return n;
		}
		return fib(n-1)+fib(n-2);
		
	}
};

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
void solve(){
	int n; cin >> n; // to calculate fibo 
	
	Solution s ;
	cout << s.fib(n) << endl;
	
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
