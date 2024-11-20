#include<bits/stdc++.h>
using namespace std;
int main(){
	//Khai báo
	int n;
	string s, result="";
	//Nhập dữ liệu
	cin>>n>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]!=result[result.length()-1]) result=result+s[i];
	}
	cout<<n-result.length();
	return 0;
}