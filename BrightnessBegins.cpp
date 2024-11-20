#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long l=1, r=2e18, ans=0;
        while(l<=r){
            long long mid=(l+r)/2;
            long long tt=sqrt(mid);
            while(tt*tt>mid) tt--;
            while((tt+1)*(tt+1)<=mid) tt++;

            long long cnt=mid-tt;
            if(cnt>=n){
                ans=mid;
                r=mid-1;
            } else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
