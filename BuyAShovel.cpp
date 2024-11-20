#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k,r,n;
    cin>>k>>r;
    for(long long i=1;i<=9;i++)
    {
        if((k*i)%10==r || (k*i)%10==0)
        {
            n=i;
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}
