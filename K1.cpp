/*Problem link :
https://codeforces.com/contest/1971/problem/B
*/
#include <bits/stdc++.h>
#define l long
#define ll unsigned long long
#define sll signed long long
#define vl vector<long>
#define vll vector<long long>
#define p push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t, n;
    string s;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (count(s.begin(), s.end(), s[0]) == s.size())
            cout << "NO" << endl;
        else
        {
            n = s.size();
            ll a = 1;
            while (a < n)
            {
                if (s[0] == s[a])
                    a++;
                else
                {
                    char c = s[a];
                    s[a] = s[0];
                    s[0] = c;
                    cout<<"YES"<<endl;
                    cout << s << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
// accepted