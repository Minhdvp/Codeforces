#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	string s;
	int count1=0, count2=0;
	//Nhập dữ liệu
	getline(cin, s);
	//Xử lý bài toán
	for(int i=0; i<s.length(); i++){
		if(65<=s[i] and s[i]<=90) count1++;
		else count2++;
	}
	if(count1>count2){
		for(int i=0; i<s.length(); i++){
			cout<<char(toupper(s[i]));
		}
	}
	else{
		for(int i=0; i<s.length(); i++){
			cout<<char(tolower(s[i]));
		}
	}
	return 0;
}