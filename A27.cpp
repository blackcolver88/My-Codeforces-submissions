/*Problem link :
https://codeforces.com/problemset/problem/439/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,d;
    vector<int> v;
    cin >> n>>d;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int c=(n-1)*10,b=0;
    for(int i=0;i<n;i++)
        b+=v[i];
    d=d-c-b;
    if(d<0)
        cout<<-1<<endl;
    else
    {
        int e=d/5;
        cout<<e+c/5<<endl;
    }
    return 0;
}
//accepted