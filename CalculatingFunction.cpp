#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	long long n;
	//Nhập dữ liệu
	cin>>n;
	//Xử lý bài toán
	if(n%2==0) cout<<n/2;
	else cout<<((n-1)/2)-n;
	return 0;
}