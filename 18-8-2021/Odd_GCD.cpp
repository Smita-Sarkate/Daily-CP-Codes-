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
        ll n;cin>>n;
        vector<ll> a(n);
        ll g, one = 0;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            if(i==0){
                g = a[i];
            }else{

                g = __gcd(g,a[i]);
                if(a[i]==1) one++;
            }

        }
        // cout<<one<<" "<<g<<" ";
        if(one || ((g&1)!=0)){
            cout<<0<<endl;
        }else{
            ll mo = INT_MAX;
            for(ll i = 0; i<n; i++){
                ll ind = -1;
                if((a[i]&(a[i]-1))==0 && a[i]!=1){
                    for(ll j = 1; j<=35; j++){
                        if((a[i]&(1<<j))){
                            ind = j;
                            break;
                        }
                    }
                }
                if(ind!=-1){
                    mo = min(mo,ind);
                }
            }

            ll cnt = 0;
            while((g&1)==0){
                g/=2;
                cnt++;
            }
            // cout<<cnt<<" ";
            // ll zzz = 1<<cnt;
            cout<<min(mo,cnt)<<endl;

        }
    }
    
    return 0;
}