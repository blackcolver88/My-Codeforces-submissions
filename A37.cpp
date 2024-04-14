/*Problem link :
https://codeforces.com/contest/1954/problem/A
*/
#include <bits/stdc++.h>
#define l long
#define ll unsigned long long
#define sll signed long long
#define vl vector<long>
#define vll vector< long long>
#define q push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll u,v,m,x,y,p,o=1;
    map<ll,ll>e;
    bool r=true;
    cin >> u>>v>>m;
    x=u;
    y=v;
    vll a;
    //set<ll> s;
    p=(x+y)%m;
    //s.insert(p);
    e.insert(make_pair(p, o));
    while(o<m)
    {
        x=(p*u)%m;
        y=(p*v)%m;
        p=(x+y)%m;
        o++;
        e.insert(make_pair(p, o));
    }
 

    for(ll i=0;i<m;i++)
    {   if(e.count(i)==1)
        {
            std::cout<<e[i]<<" ";
        }
        else if(e.count(i)==0)
        {
            std::cout<<-1<<" ";
        }
    }
    return 0;
}
// accepted