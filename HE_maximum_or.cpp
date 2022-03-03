#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> v;
int main () {/**3
6 220638658441612439
1 3 7 0 6 10
1 935896662751375597
9
7 837561863874853795
5 1 1 10 10 6 6

correct output :
220638658441612463
935896662751375615
837561863874853807

my output :

1	220638658441612466
2	935896662751375606
3	837561863874853834
**/
	int t;
	cin >> t;
	while (t--){
		long long m = INT_MIN,or_value=0;
		int N;cin>>N;
		long long k ;cin>> k;
		for(int i = 0;i<N;i++){
			long long data;cin>>data;
			or_value|=data;
		}
		ll temp = or_value ;
		while (temp>0){
            v.push_back((temp&1));
            temp=temp>>1;

		}
		for (int i = v.size();i<64;i++) {
            v.push_back(0);
		}
		for (auto i : v) {cout << i << " " ;}cout << endl;
		int i = 0;
		while (k>0){
            if (v[i]==0){
                ll op = (1<<i);
                if (op<=k){
                    v[i]=1;
                    k-=op;
                }
                else {
                    k-=op;
                }
            }
            i++;
		}
        for (auto i : v) {cout << i << " " ;}cout << endl;
		/** binary to decimal **/
        ll dec = 0;
		for (int i = 0; i < v.size();i++) {
            if (v[i]==1){
                ll value = 1;
                dec+=(value<<i);
            }
		}
		cout << dec << '\n';

	}

	return  0 ;
}
