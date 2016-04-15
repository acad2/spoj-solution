#include <iostream>
#include <map>
using namespace std;
long long max(long long a,long long b){
    return a>b?a:b;
}
map<int,long long> dp;
long long fun(long long n){
    if(n<1)
    return 0;
    if(dp[n]!=0)return dp[n];
    dp[n]=max(n,fun(n/2)+fun(n/3)+fun(n/4));
    return dp[n];
}
int main() {
	long long n;
	while(cin>>n){
	    cout<<fun(n)<<endl;
	}
	return 0;
}
