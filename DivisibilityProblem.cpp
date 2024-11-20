#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	long long t, a, b;
	//Nhập dữ liệu và xử lý bài toán
	cin>>t;
	while(t--){
		cin>>a>>b;
		long long k=a%b;
		if(k==0) cout<<"0"<<endl;
		else cout<<b-k<<endl;
	}
	return 0;
}