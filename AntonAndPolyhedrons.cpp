#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, sum=0;
	string s;
	//Nhập dữ liệu và xử lý bài toán
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="Tetrahedron") sum+=4;
		else if(s=="Cube") sum+=6;
		else if(s=="Octahedron") sum+=8;
		else if(s=="Dodecahedron") sum+=12;
		else if(s=="Icosahedron") sum+=20;
	}
	cout<<sum;
	return 0;
}