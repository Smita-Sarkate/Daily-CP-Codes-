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
        int n,m,q;cin>>n>>m>>q;
        int cnt = 0;
        int fn[n+1] = {0}; fn[0] = 0;
        bool flag = 1;
        for(int i = 0; i<q; i++){
            if(flag){
                string c;cin>>c;
                int j;cin>>j;
                if(c=="+ "){
                    if(fn[j]==0 && cnt<=m && flag){
                        cnt++;
                        fn[j] = 1;
                    }else{
                        flag = 0;
                    }
                }else{
                    if(fn[j]==1 && cnt<=m && flag){
                        cnt--;
                        fn[j] = 0;
                    }else{
                        flag = 0;
                    }
                }
            }else{
                string c;cin>>c;
                int j;cin>>j;
            }

            if(cnt>m) flag = 0;
            // for(int j = 0; j<n; j++)
        }
        if(flag) cout<<"consistent"<<endl;
        else cout<<"Inconsistent"<<endl;
    }
    
    return 0;
}