#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, x;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<int> p(n);
		for(int i=0; i<n; i++) cin>>p[i];
		vector<bool> v(n,false);
		int ans=0;
		for(int i=0; i<n; i++){
			if(!v[i]){
				int j=i;
				int c=0;
				while(!v[j]){
					v[j]=true;
					j=p[j]-1;
					c++;
				}
				ans+=(c-1)/2;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}