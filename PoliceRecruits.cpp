#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, count=0, s=0;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<v.size(); i++) cin>>v[i];
	for(int i=0; i<v.size(); i++){
		if(v[i]==-1){
			if(s>0){
				s--;
			}
			else count++;
		}
		else s+=v[i];
	}
	cout<<count;
	return 0;
}