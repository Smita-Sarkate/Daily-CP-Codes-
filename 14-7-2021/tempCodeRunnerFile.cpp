#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t = 1;
	// cin>>t;
	while(t--){
		int c; cin>>c;
		int sb = 0, temp = 0;
		while((1<<sb)<=c){
			sb++;
		}
        sb-=2;
		int b = 0;
        while(sb>-1){
            b = b | (1<<sb);
            sb--;
        }
		cout<<(c^b)*b<<endl;	
	}
	return 0;
}