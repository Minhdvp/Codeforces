#include<bits/stdc++.h>
using namespace std;
int xl(vector<pair<int, int>> &s){
	int mW=0, mH=0, total=0;
	for(auto&i:s){
		mW=max(mW, i.first);
		mH=max(mH, i.second);
		total+=2*(i.first+i.second);
	}
	return min(total, 2*(mW+mH));
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<pair<int, int>> s(n);
		for(auto&i:s) cin>>i.first>>i.second;
		int result=xl(s);
		cout<<result<<endl;
	}
	return 0;
}