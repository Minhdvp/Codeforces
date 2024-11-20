#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	string s, t;
	cin>>q;
	while(q--){
		cin>>s>>t;
        int minimum= min(s.size(), t.size());
        int count=0;
        for(int i=0; i<minimum; i++){
            if(s[i]==t[i]) count++;
            else break;
        }
        int result=count+(s.size()-count)+(t.size()-count);
        if(count!=0) result++;
        cout<<result<<endl;
	}
	return 0;
}