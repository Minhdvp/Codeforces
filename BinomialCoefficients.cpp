#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t;
	cin>>t;
	std::vector<long long> n(t), k(t);
	for(long long i=0; i<n.size(); i++) cin>>n[i];
	for(long long i=0; i<k.size(); i++) cin>>k[i];
	for(long long i = 0; i < t; i++)
    {
        long long result=1, b=2;
        while(k[i]>0){
        	if(k[i]%2==1) result=(1LL*result*b)%mod;
        	b=(1LL*b*b)%mod;
        	k[i]/=2;
        }
        cout<<result<<endl;
    }
	return 0;
}
