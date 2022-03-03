#include <bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin >> t;
   for (int i=1;i<=t;i++) {
        int n;
        cin >> n;
	   if(n==1)printf("Case %d: Tie\n",i);
	   else if (n==2)printf("Case %d: Tie\n",i);
        else if (n%2==0)printf("Case %d: CodeMask\n",i);
        else {printf("Case %d: CodeNewtons\n",i);}
   }
    return 0;
}
