#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, count=0;
	//Nhập dữ liệu
	cin>>n;
	//Xử lý bài toán
	std::vector<int> v(n);
	for(int i=0; i<v.size(); i++){
		cin>>v[i];
		if(v[i]==1) count++;
	}
	(count>0)? cout<<"HARD" : cout<<"EASY";
	return 0;
}