#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, max=-1, min=999, index1, index2;
	//Nhập dữ liệu
	cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++) cin>>a[i];
	//Xử lý bài toán
	for(int i=1; i<=n; i++){
		if(a[i]>max){
			max=a[i];
			index1=i;
		}
	}
	for(int i=1; i<=n; i++){
		if(a[i]<=min){
			min=a[i];
			index2=i;
		}
	}
	if(index1<index2){
		cout<<(index1-1)+(n-index2);
	}
	else if(index1>index2) cout<<(index1-1)+(n-index2)-1;
	else if(max==min) cout<<"0";
	return 0;
}