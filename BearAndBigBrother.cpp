#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	double a,b,x=1.5;
	int count=1;
	//Nhập dữ liệu
	cin>>a>>b;
	//Xử lý bài toán
	double t=double(b/a);
	while(t>=x){
		x=x*1.5;
		count++;
	}
	cout<<count;
	return 0;
}