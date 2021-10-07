#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define MOD 1000000007
#define inf 1000000000000000001
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define all(v) (v).begin(), (v).end()
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define print(x) cout << (x) << '\n'
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fast_io;
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;
    // cin.ignore(); must be there when using getline(cin, s)
    
    while(t--){
        string s;cin>>s;
        int ans = 9;

        int a = 0, b = 0;
        for(int i = 0; i<10; ++i){
            // if(i%2==0) if(s[i]!='0') a++;
            // else{
            //     if(s[i]=='1') b++;
            // }
            if(i%2==0) a+=s[i]!='0';
            else b+=s[i]=='1';

            if(a>(b+(10-i)/2)) ans = min(ans,i);
            if(b>(a+(9-i)/2)) ans = min(ans,i);
        }

        a = 0,b = 0;
        for(int i = 0; i<10; ++i){
            // if(i%2==0) if(s[i]=='1') a++;
            if(i%2==0) a+=s[i]=='1';
            else b+=s[i]!='0';
            // else{
            //     if(s[i]!='0') b++;
            // }
            if(a>(b+(10-i)/2)) ans = min(ans,i);
            if(b>(a+(9-i)/2)) ans = min(ans,i);
        }
        cout<<++ans<<endl;
    //     {
	// 		int cnt0 = 0, cnt1 = 0;
	// 		for (int i = 0; i < 10; ++i) {
	// 			if (i % 2 == 0) cnt0 += s[i] != '0';
	// 			else cnt1 += s[i] == '1'; 
	// 			if (cnt0 > cnt1 + (10 - i) / 2) ans = min(ans, i);
	// 			if (cnt1 > cnt0 + (9 - i) / 2) ans = min(ans, i);
	// 		}
	// 	}
		
	// 	{
	// 		int cnt0 = 0, cnt1 = 0;
	// 		for (int i = 0; i < 10; ++i) {
	// 			if (i % 2 == 0) cnt0 += s[i] == '1';
	// 			else cnt1 += s[i] != '0'; 
	// 			if (cnt0 > cnt1 + (10 - i) / 2) ans = min(ans, i);
	// 			if (cnt1 > cnt0 + (9 - i) / 2) ans = min(ans, i);
	// 		}
	// 	}
		
	// 	cout << ans + 1 << '\n';
    }
    
    return 0;
}