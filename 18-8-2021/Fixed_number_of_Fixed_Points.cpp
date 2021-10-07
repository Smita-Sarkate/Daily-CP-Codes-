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
        ll n,k;cin>>n>>k;

        if(k==(n-1) || (n==1 && k>0)){
            cout<<-1<<endl;
            continue;
        }else{
            if((n-k)%2==0){
                for(ll i = n-k; i>=1; i--){
                    cout<<i<<" ";
                }
                for(ll i = n-k+1; i<=n; i++){
                    cout<<i<<" ";
                }
                cout<<endl;
            }else{
                if(n-k){
                    cout<<n-k<<" ";
                }
                for(ll i = 1; i<=(n-k-1); i++){
                    cout<<i<<" ";
                }
                for(ll i = n-k+1; i<=n; i++){
                    cout<<i<<" ";
                }
                cout<<endl;
                }
        }
    }
    
    return 0;
}