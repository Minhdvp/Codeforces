#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, p, q;
	//Nhập dữ liệu và xử lý
	cin>>n;
	int count[n];
	for(int i=1; i<=n; i++) count[i]=0;
	cin>>p;
	int a[p];
	for(int i=1; i<=p; i++){
		cin>>a[i];
		count[a[i]]++;
	}
	cin>>q;
	int b[q];
	for(int i=1; i<=q; i++){
		cin>>b[i];
		count[b[i]]++;
	}
	for(int i=1; i<=n; i++){
		if(count[i]==0){
			cout<<"Oh, my keyboard!";
			break;
		}
		if(i==n) cout<<"I become the guy.";
	}
	return 0;
}