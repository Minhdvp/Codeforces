#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	string s, s1="", s2="", s3="", result;
	//Nhập dữ liệu
	getline(cin, s);
	//Xử lý bài toán
	for(int i=0; i<s.length(); i++){
		if(s[i]=='1') s1=s1+s[i];
		else if(s[i]=='2') s2=s2+s[i];
		else if(s[i]=='3') s3=s3+s[i];
	}
	result=s1+s2+s3;
	for(int i=0; i<result.length()-1; i++) cout<<result[i]<<"+";
	cout<<result[result.length()-1];
	return 0;
}