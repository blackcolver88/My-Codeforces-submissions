/*Problem link :
https://codeforces.com/problemset/problem/1760/C
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long t,d=0 ;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        vector<long long> v,w,v2;
        for(long long j=0;j<n;j++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
            w.push_back(a);
        }
        auto max=max_element(v.begin(),v.end());
        d=distance(v.begin(), max);
        for(long long k=0;k<n;k++)
        {
            if(k!=d)
                v2.push_back(v[k]-*max);
            else 
            {
                auto it =w.begin()+d;
                w.erase(it);
                auto max2=max_element(w.begin(),w.end());
                v2.push_back(v[k]-*max2);
            }
        }
        for(long long num:v2) 
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//accepted