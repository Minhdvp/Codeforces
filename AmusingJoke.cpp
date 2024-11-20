#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	string a,b,c,s;
	//Nhập dữ liệu
	cin>>a>>b>>c;
	//Xử lý bài toán
	s=a+b;
	sort(s.begin(), s.end());
	sort(c.begin(), c.end());
	(s==c)? cout<<"YES":cout<<"NO";
	return 0;
}