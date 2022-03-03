#include<bits/stdc++.h>
using namespace    std;
vector <long long > v;
void fasterio(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}
void solve(){
	int n;cin >> n;
	long long  sum = 0;
	v.clear();
	long long low= INT_MAX;
	int ind = 0;
    for (int i= 0 ;i<n;i++){
    		long long data;cin >> data;
    		if (data<low){
    			low=data;
    			ind = i;
    		}
    		v.push_back(data);
    		sum+=data;
    }
    
    int bit=__builtin_popcount(sum)+__builtin_ctz(sum);
    long long  tempSum = sum;
    long long  val  = sum&-sum ;
    if (val==sum){
    	cout << "0" << endl;
    }
    else {
    		
    		long long ans = 1<<bit;
    		long long temp = ans-sum;
    		temp+=v[ind];
    		ans = temp/v[ind];
    		cout << "1" << endl;
    		cout << "1" << " " << ans << endl;
    		cout << ind+1 << endl;

    }
    
}
int main(){ fasterio();
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int t=1;
    cin >> t;
    while (t--)solve();




#ifndef ONLINE_JUDGE
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC); 
#endif

   return 0;
}