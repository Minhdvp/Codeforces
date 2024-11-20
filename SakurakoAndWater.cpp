#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int result=0;
		std::vector<vector<int>> v(n,vector<int>(n));
		std::vector<int> d(n*2-1,0);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++) cin>>v[i][j];
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++) d[i-j+n-1]=min(d[i-j+n-1], v[i][j]);
		}
		for(int i=0; i<d.size(); i++)
			if(d[i]<0) result-=d[i];
		cout<<result<<endl;
	}
	return 0;
}