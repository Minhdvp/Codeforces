#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo 
	int n, k;
	//Nhập dữ liệu
	cin>>n;
	int a[n+1];
	//Xử lý bài toán
	for(int i=1; i<=n; i++){
		cin>>k;
		a[k]=i;
	}
	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
	return 0;
}