/*Problem link :
https://codeforces.com/problemset/problem/1374/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long x,y,n,m;
        cin>>x>>y>>n;
        m=n%x;
        if(m==n)
            cout<<y<<endl;
        else
        {
            if(m<y)
                cout<<n-m-(x-y)<<endl;
            else
                cout<<n-(m-y)<<endl;
        }
    }
    return 0;
}
//accepted