/*Problem link :
https://codeforces.com/contest/1954/problem/A
*/
#include <bits/stdc++.h>
#define l long
#define ll unsigned long long
#define sll signed long long
#define vl vector<long>
#define vll vector<long long>
#define vsll vector<signed long long>
#define vs vector<string>
#define p push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n, k, j, b;
    string a;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        b=0;
        cin >> n >> k;
        cin >> a;
        j=0;
        while(j<n)
        {
            if(a[j]!='B')
                j++;
            else if(a[j]=='B')
            {
                j=j+k;
                b++;
            }
        }
        cout << b << endl;
    }
    return 0;
}
// accepted