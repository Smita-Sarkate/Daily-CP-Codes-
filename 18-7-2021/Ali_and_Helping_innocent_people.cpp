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
        int v[26] = {0};
        int num[9];
        for(int i = 0; i<9; i++){
            if(s[i]>='0' && s[i]<='9') num[i] = s[i]-'0';
            else num[i] = -1;
        }
        // for(int i = 0; i<9; i++) cout<<num[i]<<" ";
        v['A'-'A'] = 1, v['E'-'A'] = 1, v['I'-'A'] = 1, v['O'-'A'] = 1, v['U'-'A'] = 1, v['Y'-'A'] = 1;
        bool ans = true;
        if(v[s[2]-'A']==0){
            int sum = 0;
            for(int i = 1; i<9; i++){
                if(num[i]!=-1){
                    sum = sum + (num[i]+num[i-1]);
                // cout<<i<<" "<<sum<<endl;
                    if(sum%2!=0){
                        ans = false;
                        break;
                    } 
                }
                else{
                    i++;
                    // cout<<sum<<endl;
                    sum = 0;

                }
            }
        }else{
            ans = false;
        }
        (ans)? cout<<"valid"<<endl: cout<<"invalid"<<endl;
    }
    
    return 0;
}