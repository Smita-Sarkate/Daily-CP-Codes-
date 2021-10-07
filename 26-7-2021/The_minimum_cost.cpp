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
        int n,c01,c10;cin>>n>>c01>>c10;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        int cnt1 = 0, cnt0 = 0;
        // for odd pos 1
        //    even pos 0

        for(int i = 0; i<n; i++){
            if((i&1)==0){
                if(a[i]==1) cnt1++;
            }else{
                if(a[i]==0) cnt0++;
            }
        }
        int cost1 = cnt0*c01 + cnt1*c10;
        
        
        // for odd pos 0
        //    even pos 1

        for(int i = 0; i<n; i++){
            if((i&1)==0){
                if(a[i]==0) cnt0++;
            }else{
                if(a[i]==1) cnt1++;
            }
        }
        cost1 = min(cost1, (cnt0*c01 + cnt1*c10));
        cout<<cost1<<endl;

        
    }
    
    return 0;
}