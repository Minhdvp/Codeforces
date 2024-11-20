#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, t;
	string s;
	//Nhập dữ liệu
	cin>>n>>t>>s;
	//Xử lý bài toán
	while(t--){
		int i=0;
		while(i<s.length()){
			if(s[i]=='B' and s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i+=2;
			}
			else{
				i++;
			}
		}
	}
	cout<<s;
	return 0;
}