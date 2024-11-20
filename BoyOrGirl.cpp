#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	string s, result="";
	//Nhập dữ liệu
	getline(cin, s);
	//Xử lý bài toán
	for(int i=0; i<s.length(); i++){
		if(result.find(s[i])==string::npos) result=result+s[i]; 
		//Hàm .find() trả về string::npos khi không tìm thấy, ngược lại trả vị trí đầu tiên gặp
	}
	if(result.length()%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	return 0;
}