#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	string s=to_string(n);
	vector<int> v(10,0);
	for(int i=0; i<s.length(); i++){
		if(v[int(s[i])-48]==0) v[int(s[i])-48]++;
		else{
			v.clear();
			return false;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int y;
	//Nhập dữ liệu
	cin>>y;
	//Xử lý bài toán
	for(int j=y+1; j<=10000; j++){
		if(check(j)==true){
			cout<<j;
			break;
		}
	}
	return 0;
}