#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//Khai báo
	int n, p, sum=0;
	//Nhập dữ liệu
	cin>>n;
	int k=n;
	while(n--){
		cin>>p;
		sum+=p;
	}
	double result= 1.0*sum/k;
	cout<<result;
	return 0;
}