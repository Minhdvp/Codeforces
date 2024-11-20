#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo 
	string s;
	int a[123], count=0;
	//Nhập dữ liệu
	getline(cin,s);
	//Xử lý bài toán
	for(int i=97; i<=122; i++) a[i]=0;
	for(int i=1; i<s.length()-1; i++){
		if(int(s[i])>=97 and int(s[i])<=122) a[int(s[i])]++;
	}
	for(int i=97; i<=122; i++){
		if(a[i]>0) count++; 
	}
	cout<<count;
	return 0;
}