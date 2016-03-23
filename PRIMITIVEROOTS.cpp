#include <iostream>
#include <cstring>
using namespace std;
int p[10001];
void seive(){
    memset(p,0,sizeof(p));
    for(int i=2;i*i<=10000;i++){
        if(!p[i]){
            for(int j=2*i;j<=10000;j+=i){
                p[j]=1;
            }
        }
    }
}
int main() {
    seive();
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int n;
	    cin>>n;
	    if(n==3){
	        cout<<i<<":"<<"2"<<endl;
	    }
	    else if(!p[n]){
	        cout<<i<<":"<<"1"<<endl;
	    }else{
	        cout<<i<<":"<<"NOTPRIME"<<endl;
	    }
	}
	return 0;
}
 