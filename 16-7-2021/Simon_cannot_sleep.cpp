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

    int t = 1;
    // cin>>t;
    // cin.ignore(); must be there when using getline(cin, s)
    
    while(t--){
        string s;cin>>s;
        string min = s.substr(3,5);
        float h = stoi(s);
        float m = stoi(min);
        int cnt = 0;
        if(h<12){
            cnt+=(h-1);
            float dhr = (h*60 + m)/2;
            float dmin = m*6;
            if(dhr<=dmin) cnt++;
            cout<<cnt+1<<endl;
        }else{
            h-=12;
            float dhr = (h*60 + m)/2;
            float dmin = m*6;
            cnt+=11;
            cnt+=(h-1);
            // cout<<dhr<<" "<<dmin<<endl;
            if((dhr)<=dmin) cnt++;
            cout<<cnt+1<<endl;
        }

    }
    
    return 0;
}