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
        cin.ignore();
        int xa,xb,ya,yb,xf,yf;cin>>xa>>ya>>xb>>yb>>xf>>yf;
        
        // int xans = abs(xf-xa) + abs(xb-xf);
        // int yans = abs(yf-ya) + abs(yb-yf);

        // if((abs(xb-xa)==xans || abs(yb-ya)==yans)) cout<<max(abs(xb-xa),abs(yb-ya))+2<<endl;
        // else cout<<max(abs(xb-xa),abs(yb-ya))<<endl;
        int ans = abs(xa - xb) + abs(ya - yb);
        if((xa==xb && xa==xf && min(ya,yb)<yf && yf<max(ya,yb)) || (ya==yb && ya==yf && min(xa,xb)<xf && xf<max(xa,xb)))
            ans += 2;

        cout<<ans<<endl;
    }
    
    return 0;
}