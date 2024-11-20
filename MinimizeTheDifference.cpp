///CHƯA HOÀN THÀNH///

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
            result=result+v[i];
        }
        long long k=result/n;
        long long max=*max_element(v.begin(), v.end())-*min_element(v.begin(), v.end());
        long long final=max-abs(k-v[0]);
        cout<<final<<endl;
        v.clear();
    }
    return 0;
}