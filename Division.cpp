#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int rating;
        cin>>rating;
        int ans;
        if(1900<=rating)
        ans = 1;
        else if(1600<=rating && rating<=1899)
        ans =2;
        else if(1400<=rating && rating<=1599)
        ans = 3;
        else
        ans = 4;
        cout<<"Division"<<" "<<ans<<endl;
    }
    return 0;
}