#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t = 1;
	// cin>>t;
	while(t--){
		ll c; cin>>c;
		int sb = 0, temp = 0;
		while((1<<sb)<=c){
			sb++;
		}
        sb-=2;
		ll b = 0;
        while(sb>-1){
            b = b | (1<<sb);
            sb--;
        }
        // cout<<b<<" "<<(c^b)<<endl;
        long long ans = (c^b)*b;
		cout<<ans<<endl;	
	}
	return 0;
}