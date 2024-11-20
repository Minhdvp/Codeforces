#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, a, b, result=0, max=-1;
	//Nhập dữ liệu
	cin>>n;
	//Xử lý bài toán
	while(n--){
		cin>>a>>b;
		result=result-a+b;
		if(result>max) max=result;
	}	
	cout<<max;
	return 0;
}