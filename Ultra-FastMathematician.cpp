#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	string s, s1;
	//Nhập dữ liệu
	getline(cin, s);
	getline(cin, s1);
	//Xử lý bài toán
	for(int i=0; i<s.length(); i++){
		if(s[i]!=s1[i]) cout<<"1";
		else cout<<"0";
	}
	return 0; 
}