#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	long long n, count=1;
	string s, test;
	//Nhập dữ liệu
	cin>>n;
	cin>>s;
	test=s;
	n--;
	//Xử lý bài toán
	while(n--){
		cin>>s;
		if(s!=test){
			count++;
			test=s;
		}
	}
	cout<<count;
	return 0;
}