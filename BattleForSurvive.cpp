#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, n;
    cin >> t;
    while (t--) {
        long long result=0;
        cin >> n;
        vector<long long> v(n);
        for(int i=0; i<v.size(); i++){
            cin>>v[i];   
        }
        for(int i=0; i<v.size()-1; i++){
            result=result+(-1)*v[i];
        }
        cout<<v[v.size()-1]-(result+2*v[v.size()-2])<<endl;
        v.clear();
    }
    return 0;
}