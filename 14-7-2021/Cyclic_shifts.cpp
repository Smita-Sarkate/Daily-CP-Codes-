#include<bits/stdc++.h>
using namespace std;

bool getbit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

void lreplace(int n, int m){
    while(m--){
        if((n&(1<<15))!=0){
            n = n<<1;
            n = n|1;
        }else n = n<<1;
        int mask = ~(1<<16);
        n = n & mask;
    }
    cout<<n<<endl;
}

void rreplace(int n, int m){
    while(m--){
        int fd = getbit(n,0);
        n = n>>1;
        if(fd){
            n = n | (fd<<15);
        }
    }
    cout<<n<<endl;
}



int main()
{
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		char c; cin>>c;
        if(c=='L'){
            lreplace(n,m);
        }else{
            rreplace(n,m);
        }
	}
	return 0;
}