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
        int l = s.length();
        bool flg = 0;
        if(l==1){
            cout<<"No"<<endl;
            continue;
        }
        if(l==2){

            if(s[0]=='M' && s[1]=='U')
                cout<<"Yes"<<endl;
            else{
                cout<<"No"<<endl;
                // continue;
            }
            continue;
        }

        for(int i = 2; i<l; i++){
            if((s[i-2]=='M' && s[i-1]=='?' && s[i]=='U') || (s[i-2]=='M' && s[i-1]=='U' && s[i]=='?') || (s[i-2]=='?' && s[i-1]=='M' && s[i]=='U')){
                flg = 1;
                break;
            }
        }
        if(flg) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}
