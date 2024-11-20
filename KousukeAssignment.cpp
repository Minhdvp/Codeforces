#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, x;
	cin>>t;
	while(t--){
		cin>>n;
		std::map<int, int> p;
		p[0]=0;
		int count=0, result=0;
		for(int i=0; i<n; i++){
			cin>>x;
			count+=x;
			if(p.find(count)!=p.end()){
				result++;
				p.clear();
				p[0]=0;
				count=0;
			}
			else p[count]++;
		}
		cout<<result<<endl;
	}
	return 0;
}