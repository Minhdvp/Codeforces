#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	long long t,n;
	//Nhập dữ liệu và xử lý bài toán
	cin>>t;
	while(t--){
		cin>>n;
		if(n<=2) cout<<"0"<<endl;
		else{
			if(n%2==0) cout<<(n/2)-1<<endl;
			else cout<<n/2<<endl;
		}
	}
	return 0;
}