/*Problem link :
https://codeforces.com/problemset/problem/337/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    vector<int> v,w;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
        if(i+n-1<=m-1)
            w.push_back(v[i+n-1]-v[i]);
    auto e=min_element(w.begin(),w.end());
    auto f=find(w.begin(),w.end(),*e); 
    int a= distance(w.begin(), f);
    cout<<v[a+n-1]-v[a]<<endl;      
    return 0;
}
//accepted