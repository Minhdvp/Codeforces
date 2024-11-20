#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	string s1, s2;
	//Nhập dữ liệu
	getline(cin, s1);
	getline(cin, s2);
	//Xử lý bài toán
	if(s1.length()!=s2.length()) cout<<"NO";
	else{
		reverse(s2.begin(), s2.end());
		for(int i=0; i<s1.length(); i++){
			if(s1[i]!=s2[i]){
				cout<<"NO";
				break;
			}
			if(i==s1.length()-1) cout<<"YES";
		}
	}
	return 0;
}