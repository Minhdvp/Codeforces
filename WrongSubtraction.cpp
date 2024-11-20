#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	long long n,k;
	//Nhập dữ liệu
	cin>>n>>k;
	//Xử lý bài toán
	for(int i=0; i<k; i++){
		if(n%10==0) n=n/10;
		else n=n-1;
	}
	cout<<n;
	return 0;
}