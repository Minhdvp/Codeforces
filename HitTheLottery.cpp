#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	long long n, count=0;
	//Nhập dữ liệu
	cin>>n;
	//Xử lý bài toán
	while(n>0){
		if(n>=100) n-=100;
		else if(n>=20) n-=20;
		else if(n>=10) n-=10;
		else if(n>=5) n-=5;
		else if(n>=1) n--;
		count++;
	}
	cout<<count;
	return 0;
}