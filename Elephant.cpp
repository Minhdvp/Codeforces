#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	long long x;
	//Nhập dữ liệu
	cin>>x;
	//Xử lý bài toán
	if(x%5==0) cout<<x/5;
	else cout<<(x/5)+1;
	return 0;
}