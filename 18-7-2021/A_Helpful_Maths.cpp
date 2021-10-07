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
        int len = s.length();
        int n = len/2+1;
        int v[n];
        int j = 0;
        for(int i = 0; i<len; i++){
            if(s[i]!='+'){
                v[j] = s[i]-'0';
                j++;
            }
        }
        sort(v,v+n);
        for(int i = 0; i<n; i++){
            if(i==0) cout<<v[i];
            else cout<<"+"<<v[i];
        }
    }
    
    return 0;
}