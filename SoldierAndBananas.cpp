#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	long long k, n, w, result=0;
	//Nhập dữ liệu
	cin>>k>>n>>w;
	//Xử lý bài toán 
	for(int i=1; i<=w; i++) result=result+i*k;
	if(result>n) cout<<result-n;
	else cout<<"0";
	return 0;
}