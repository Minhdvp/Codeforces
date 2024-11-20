#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo 
	int n;
	int a[27];
	for(int i=65; i<=90; i++) a[i]=0;
	string s;
	//Nhập dữ liệu
	cin>>n;
	cin>>s;
	//Xử lý bài toán
	if(n<26) cout<<"NO";
	else{
		for(int i=0; i<s.length(); i++) a[toupper(s[i])]++;
		for(int i=65; i<=90; i++){
			if(a[i]==0){
				cout<<"NO";
				break;
			}
			if(i==90) cout<<"YES";
		}
	}
	return 0;
}