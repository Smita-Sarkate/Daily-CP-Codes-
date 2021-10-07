// #include<bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long
// #define vi vector<int>
// #define vll vector<ll>
// #define vvi vector < vi >
// #define pii pair<int,int>
// #define pll pair<long long, long long>
// #define MOD 1000000007
// #define inf 1000000000000000001
// #define mp(x,y) make_pair(x,y)
// #define mem(a,val) memset(a,val,sizeof(a))
// #define all(v) (v).begin(), (v).end()
// #define eb emplace_back
// #define pb push_back
// #define f first
// #define s second
// #define print(x) cout << (x) << '\n'
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define endl '\n'
// using namespace std;


// int sb(ll n){
//     int c = 0;
//     int i = 0;
//     while(n!=0){
//         if(n&1!=0) 
//             if(i&1!=0) c++;
//         else c+=2; 
//         n = n>>1;
//         i++;
//     }return c;
// }
// int main()
// {
//     std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,x;cin>>n>>x;
//         ll k = 0;
//         if(x>=n){
//             cout<<1<<endl; continue;
//         }else{
//             if(x==0 && (n&1)!=0){
//                 cout<<-1<<endl; continue;
//             }
//             cout<<sb(n)<<endl;
//         }
//     }
//     return 0;

//     std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,x;cin>>n>>x;
//         ll k = 0;
//         if(x>=n){
//             cout<<1<<endl; continue;
//         }else{
//             if(x==0 && (n&1)!=0){
//                 cout<<-1<<endl; continue;
//             }
//             cout<<sb(n)<<endl;
//         }
//     }
//     return 0;
// }


#include "bits/stdc++.h"
using namespace std;
#define int long long 
#define FOR(n) for(int i=0;i<n;i++)
#define rep(i,j,n) for(int i=j;i<n;i++)
#define pb push_back
#define ppb pop_back()
#define mod 1000000007
#define all(v) v.begin(),v.end()
#define every(a,n) a,a+n
#define mp make_pair
#define f first
#define s second
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define tez ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all_st for(auto it=st.begin();it!=st.end();it++)
#define mp_x unordered_map<int,int>x
#define endl "\n"
#define sz(x) (int)x.size()
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

int power(int  x, int y, int p)
{
    int ans = 1;
    x = x % p; 
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)
            ans = (ans*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return ans;
}

void solve()
{
    long long n,x;
    cin>>n>>x;

    int odd[20];
    odd[0]=2;
    rep(i,1,20)odd[i]=odd[i-1]*4;

    int ans = 0;

    for(int i=19;i>=0;i--){
        ans+=n/odd[i];
        n%=odd[i];
        if(n<=x && n!=0){
            cout<<ans+1<<endl;
           return;
        }
        if(n==0){
            cout<<ans<<endl;
           return;
        }
        if(n<x*2 && (odd[i-1]<x)){
            while(n>x){
                n/=odd[-i];
                ans++;
            }
            cout<<ans+1<<endl;
            return;
        }
    }
    if(n){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    #endif
    tez
    int test_case=1;
    cin>>test_case;
    for(int i=1;i<=test_case;i++)
    {
    solve();
    }
}
