#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo 
	int n;
	//Nhập dữ liệu
	cin>>n;
	//Xử lý bài toán
	string s1="I hate it";
	string s2="I love it";
	for(int i=1; i<n; i++){
		if(i%2!=0) cout<<"I hate that ";
		else cout<<"I love that ";
	}
	(n%2==0)? cout<<s2 : cout<<s1;
	return 0;
}