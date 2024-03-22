/*Problem link :
https://codeforces.com/problemset/problem/318/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2) { 
        cout << 2 * k - 1 << endl; 
    } else {
        cout << 2 * (k - (n + 1) / 2) << endl; 
    }
    return 0;
}
//accepted