
#include <bits/stdc++.h>


#define cp(t)  \
     int t;    \
     cin >> t; \
     while (t--)
 

using namespace std;
int zero = 0;

 
int nxt()
{
     int n;
     cin >> n;
     return n;
}
 
signed main()
{
 
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     map<char, int> mpp;
     mpp['c'] = 1;
     mpp['o'] = 1;
     mpp['d'] = 1;
     mpp['e'] = 1;
     mpp['f'] = 1;
     mpp['o'] = 1;
     mpp['r'] = 1;
     mpp['c'] = 1;
     mpp['e'] = 1;
     mpp['s'] = 1;
     cp(t)
     {
          char c;
          cin >> c;
          cout << (mpp[c] ? "Yes" : "No") << endl;
     }
     return 0;
}