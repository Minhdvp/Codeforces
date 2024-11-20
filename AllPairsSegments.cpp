#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	long long t, n, q;
	//Nhập dữ liệu và xử lý bài toán
	cin>>t;
	while(t--){
		cin>>n>>q;
		vector<long long> v(n);
		vector<long long> a(q);
		vector<long long> dem(n, 0);
		vector<long long> ketqua(q);
		for(long long i=0; i<v.size(); i++){
			cin>>v[i];
		}
		for(long long i=0; i<a.size(); i++){
			cin>>a[i];
		}
		for(long long i=1; i<v.size(); i++){
			long long k= v[i]-v[i-1];
			dem[1]+=k-1;
			dem[i]++;
		}
		for(long long i=1; i<v.size(); i++) dem[i]+=dem[i-1];
		for(long long i=0; i<a.size(); i++){
			if(a[i]>=v.size()) ketqua[i]=0;
			else ketqua[i]=dem[v.size()-1] - dem[a[i]-1];
		}
		for(long long i=0; i<a.size(); i++) cout<<ketqua[i]<<" ";
		cout<<endl;
		v.clear();
		a.clear();
	}
	return 0;
}