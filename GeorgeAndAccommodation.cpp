#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n,p,q, count=0;
	//Nhập dũ liệu
	cin>>n;
	//Xử lý bài toán
	for(int i=0; i<n; i++){
		cin>>p>>q;
		if(q-p>=2) count++;
	}
	cout<<count;
	return 0;
}