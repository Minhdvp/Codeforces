#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	int t, n, k;
	//Nhập dữ liệu
	cin>>t;
	while(t--){
		int Robin=0, count=0;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0; i<v.size(); i++){
			cin>>v[i];
			if(v[i]>=k) Robin=Robin+v[i];
			else if(v[i]==0 and Robin>0){
				count++;
				Robin--;
			}
		}
		cout<<count<<endl;
		v.clear();
	}
	return 0;
}