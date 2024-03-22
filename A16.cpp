/*Problem link :
https://codeforces.com/contest/1555/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long t, a;
    cin>>t;
    for (long long i=0;i<t;i++)
    {
        cin >> a;
        cout << max((long long)15, (a+ 1) / 2 * 5) << endl;
    }
}
//accepted