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
        int n;
        cin>>n;
        int arr[n];
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        int num = 0;
        int a = 0, b = 0;
        for(int i = 0; i<n ; i++){
            if(i<n/2){
                int d = log10(arr[i]);
                // while(arr[i]>10){
                //     arr[i]/=10;
                // }
                if((i&1)==0)
                    a = a + arr[i]/(pow(10,d));
                else
                    b = b + arr[i]/(pow(10,d));
            }else{
                if((i&1)==0)
                    a+=(arr[i]%10);
                else
                    b+=(arr[i]%10);
            }
        }
        if(a==b) cout<<"OUI";
        else cout<<"NON";
    }
    
    return 0;
}