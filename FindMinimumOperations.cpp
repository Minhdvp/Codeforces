#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long count = 0;
        if (k == 1) {
            cout << n << endl;
        }
        else{
            while(n>0){
                count+=n%k;
                n/=k;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
