#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	string s;
	//Nhập dữ liệu
	getline(cin, s);
	//Xử lý bài toán
	cout<<char(toupper(s[0]));
	for(int i=1; i<s.length(); i++) cout<<s[i];
	return 0;
}