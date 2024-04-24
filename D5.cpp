/*Problem link :
https://codeforces.com/contest/1520/problem/B
*/
#include <bits/stdc++.h>
#define l long
#define sl signed long
#define si signed int
#define ll long long
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
    long t, n, a, m;
    int q;
    char k;
    string s1, s2 ;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n < 10)
            cout << n << endl;
        else
        {
            s1 = to_string(n);
            s2="";
            a = s1.size();
            k = s1[0];
            q = k - '0';
            for (l i = 0; i < a; i++)
                s2 += k;
            m = stol(s2);
            if (n - m < 0)
                cout << ((a - 1) * 9) + (9 - (9 - (q - 1))) << endl;
            else
                cout << ((a - 1) * 9) + (9 - (9 - q))<< endl;
        }
    }
    return 0;
}
// accepted