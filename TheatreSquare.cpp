#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	long long n,m,a;
	int k1,k2;
	//Nhập dữ liệu
	cin>>n>>m>>a;
	//Xử lý bài toán
	if(n%a==0) k1=n/a;
	else k1=(n/a)+1;
	if(m%a==0) k2=m/a;
	else k2=(m/a)+1;
	cout<<k1*k2;
	return 0;
}