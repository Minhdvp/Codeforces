#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a + b == c)
        cout << "+\n";
    else if (a - b == c)
        cout << "-\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}