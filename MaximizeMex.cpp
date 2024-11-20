#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a[200200], b[200200], c[200200]; 
    cin >> t;
    while (t--) {
        int n, x; 
        cin >>n>>x;
        for(int i=0; i<=n+1; i++) b[i]=c[i]=0;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
            if(a[i]<=n) c[a[i]]++;
        }
        sort(a+1, a+n+1);
        if(x>n){
            int k=0;
            for(int i=1; i<=n; ){
                if(a[i]!=k) break;
                while(i<=n and a[i]==k) i++;
                k++;
            }
            cout<<k<<endl;
        }
        else{
            for(int i=0; i<=n; i++){
                b[i%x]+=c[i];
                if(b[i%x]==0){
                    cout<<i<<endl;
                    break;
                }
                else b[i%x]--;
            }
        }
    }
    return 0;
}
