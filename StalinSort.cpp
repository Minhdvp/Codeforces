#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int v[n], r=n;
		for(int i=0; i<n; i++) cin>>v[i];
		for(int i=0; i<n; i++){
			int k=i;
			for(int j=i+1; j<n; j++){
				if(v[i]<v[j]) k++;
			}
			r=min(r,k);
		}
		cout<<r<<endl;
	}
	return 0;
}