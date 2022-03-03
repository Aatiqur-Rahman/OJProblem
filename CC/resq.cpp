
#include <bits/stdc++.h>

using namespace std;
set <int> s;

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n ; // cupcakes
	cin >> n ;
	s.clear();
	// cupcakes is 1 then answer is zero 
	if (n==1){
		cout << 0 << endl;
	}
	else { // finding number of divisor 
		s.insert(1);s.insert(n);
		for (int i = 2 ; i <= sqrt(n) ; i++){
			if (n%i==0){
				s.insert(i);
				s.insert(n/i);
			}
		} 

		if (s.size()&1) { // if number of divisor is odd the minimum difference would be from mid one divisor  
			int si = s.size()/2;
			auto it = s.begin();
			for(int i=0;i<si;i++){ // finding the mid 
				it++;
			}
			cout << *it-*it << endl;
		}
		else { // if number of divisor is even the minimum difference would be from mid two divisor 
			int si = s.size()/2;
			auto it = s.begin();
			for (int i = 0 ;i<si;i++){ // finding the mid and mid-1 divisor  
				it++;
			}
			int temp = *it ;
			--it;
			cout << temp - *it << endl;
		}
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
