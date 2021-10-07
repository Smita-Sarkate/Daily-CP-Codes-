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

bool isprime(ll n){
    for(ll i = 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}
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
        ll n;cin>>n;
        (isprime(n))? cout<<"YES"<<endl: cout<<"NO"<<endl;
    }
    
    return 0;
}