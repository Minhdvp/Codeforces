#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		//cout<<(n%2==0? "Sakurako":"Kosuke")<<endl;
		if(n%2==0) cout<<"Sakurako"<<endl;
		else cout<<"Kosuke"<<endl;
	}
	return 0;
}