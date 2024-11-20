#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<int> v(n);
		for(int i=0; i<v.size(); i++) cin>>v[i];
		sort(v.begin(), v.end());
		cout<<(n-1)*(v[v.size()-1]-v[0])<<endl;
		v.clear();
	}
	return 0;
}