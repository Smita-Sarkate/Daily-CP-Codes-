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
        int n;cin>>n;
        int set = 0;
        while(n>(1<<set)){
            set++;
        }
    
        if(n==1 || n==2){
            cout<<n<<" ";
            while(n) cout<<n--<<" ";
            cout<<endl;
        }else if(n==((1<<set)-1)){
            cout<<0<<endl;
        }else if(n==(1<<set)){
            cout<<1<<" "<<n<<endl;
        }else{
            int ans = n-(1<<set)+1;
            cout<<ans<<" ";
            while(ans--) cout<<n--<<" ";
            cout<<endl;
        }    
    }
    
    return 0;
}