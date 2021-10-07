#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int cnt = 0;

        for(int i = 0; i<n; i++){
            if((a[i] & 1)!=0){
                cnt++;
            }
        }
        cout<<min((n-cnt), cnt)<<endl;
    }
    return 0;
}