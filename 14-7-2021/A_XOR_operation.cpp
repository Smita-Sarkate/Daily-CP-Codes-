#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t = 1;
	cin>>t;
	while(t--){
		int n;cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        int ans = 0;
        for(int i = 0; i<32; i++){
            int cnt = 0;
            for(int j = 0; j<n; j++){
                if(a[j] & (1<<i)) cnt++;
            }
            if(cnt%(n/2)==0 && cnt!=0){
                ans = ans | (1<<i);
            }
            cout<<cnt<<" ";
        }
        if(ans==0) cout<<-1<<endl;
        else cout<<ans<<endl;
	}
	return 0;
}