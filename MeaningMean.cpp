#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n); 
        for (int i =0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int r=a[0];
        for(int i=1; i<n; i++) r=(r+a[i])/2;
        cout<<r<<endl;
    }
    return 0;
}
