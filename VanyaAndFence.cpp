#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, h, result=0;
	//Nhập dữ liệu
	cin>>n>>h;
	vector<int> v(n);
	//Xử lý bài toán
	for(int i=0; i<v.size(); i++){
		cin>>v[i];
		(v[i]>h)? result=result+2 : result++;
	}
	cout<<result;
	return 0;
}