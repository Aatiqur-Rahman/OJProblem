
#include <bits/stdc++.h>
#define N 100001

using namespace std;
vector <long long> arr(N,1);

void fasterio(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
}

void solve(){
	int n;cin>> n;
	arr[0]=1;
	long long ans=1;
	int data1;cin >>data1;
	for (int i =1;i<n;i++){
		int data2;cin >> data2;
		if (data2>=data1){
			arr[i]=arr[i-1]+arr[i];
			ans+=arr[i];
		}
		else {
			arr[i]=1;
			ans+=arr[i];
		}
		data1=data2;
	}
	cout << ans << endl;
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
