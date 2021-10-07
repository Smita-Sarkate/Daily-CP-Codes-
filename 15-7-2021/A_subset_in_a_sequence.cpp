#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[33];

int noOfOnes(ll n){
    int cnt = 0;
    while(n){
        n = n & n-1;
        cnt++;
    }
    return cnt;
}

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
	int t;cin>>t;
    for(int i = 0; i<32; i++) a[i] = 0;
    
    a[0] = 1, a[1] = 3; int pow = 1;
    for(int i = 2; i<32; i*=2){
        a[i] = a[i/2] * a[i/2];
    }
    for(int i = 0; i<32; i++){
        if(a[i]==0){
            a[i] = binpow(3, i);
        }
    }
	while(t--){
		ll n; cin>>n;
        int cnt = 0;
        int ans = noOfOnes(n);
        cout<<ans<<endl;

        for(int i = 0; i<40 && ans!=0; i++){
            if((n&(1<<i))!=0){
                cout<<a[i]<<" ";
                ans--;
            }
        }
        cout<<endl;
	}
	return 0;
}