#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int t, n;
	//Nhập dữ liệu và xử lý bài toán
	cin>>t;
	while(t--){
		int sum1=0, sum2=0, max1=-1, max2=-1;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<v.size(); i++){
			cin>>v[i];
			if(i%2!=0){
				sum1++;
				if(v[i]>max1) max1=v[i];
			}
			else{
				sum2++;
				if(v[i]>max2) max2=v[i];
			}
		}
		if(sum1+max1>sum2+max2) cout<<sum1+max1<<endl;
		else cout<<sum2+max2<<endl;
		v.clear();
	}
	return 0;
}