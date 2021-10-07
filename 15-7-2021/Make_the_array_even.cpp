#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+1];
        a[n] = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            if((a[i] & 1)!=0) a[i] = 1;
            else a[i] = 0;
        }
        int cnt = 0;
        
        for(int i = 1; i<n+1; i++){
            if(a[i]){
                if(a[i-1]){
                    cnt++;
                    a[i] = 0;
                }else if(a[i+1]){
                    cnt++;
                    a[i] = 0;
                    a[i+1] = 0;
                }else{
                    cnt+=2;
                    a[i] = 0;
                }
            }else{
                if(a[i-1]) cnt+=2;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}