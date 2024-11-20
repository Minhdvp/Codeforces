#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 	int t, n, k; 
 	cin >> t;
 	while(t--){
 		cin>>n>>k;
 		if((k-(n/2-(n-k)/2)) % 2 == 0) cout << "YES"<<endl;
 		else cout << "NO"<<endl;
 	}
 	return 0;
}