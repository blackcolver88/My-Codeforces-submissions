/*Problem link :
https://codeforces.com/contest/1954/problem/A
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
    int t, n,m,k,a=1 ;
    bool r = true;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        a=1;
        vector<int> v, w;
        int j=0;
        while (j < n)
        {
            v.push_back(a);
            if (a < m)
                a++;
            else
                a = 1;
            j++;
        }
        for (int i = 1; i <= m; i++)
            w.push_back(count(v.begin(), v.end(), i));
        int z = *max_element(w.begin(), w.end());
        if (k >= n - z)
            cout<<"No"<<endl;
        else
            cout<<"YES"<<endl;
      
    }
    return 0;
}
// accepted