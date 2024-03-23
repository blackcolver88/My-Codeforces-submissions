/*Problem link :
https://codeforces.com/contest/1946/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long t,n,c2=0;
    for(cin>>t;t--;)
    {
        cin>>n;
        vector<long> v,w2;
        for(int i=0;i<n;i++)
        {
            long a;
            cin>>a;
            v.push_back(a);
        }
        if(v.size()==1)
            cout<<1<<endl;
        else
        {
        sort(v.begin(),v.end());
        long b=v[((n+1)/2)- 1];
        if(n%2==0)
            for(int i=0;i<(n+1)/2+1;i++)
                w2.push_back(v[n-1-i]);
        else if(n%2==1)
            for(int i=0;i<(n+1)/2;i++)
                w2.push_back(v[n-1-i]);
        long c2=count(w2.begin(),w2.end(),b);
        cout<<c2<<endl;
        }
    }
    return 0;
}
//accepted