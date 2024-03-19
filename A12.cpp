/*Problem link :
https://codeforces.com/problemset/problem/1535/A
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int> v;
        for(int j=0;j<4;j++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int a,b;
        if(v[0]>v[1])
        {
            a=v[1];
        }
        else if (v[1]>v[0])
        {
            a=v[0];
        }
        if(v[2]<v[3])
        {
            b=v[2]; 
        }
        else if (v[3]<v[2])
        {
            b=v[3];
        }
        if(((a==v[1])&&(b==v[2])&&(a>v[3] || b>v[0])) || ((a==v[0])&&(b==v[2])&&(a>v[3] || b>v[1])) || ((a==v[1])&&(b==v[3])&&(a>v[2] || b>v[0])) || ((a==v[0])&&(b==v[3])&&(a>v[2] || b>v[1])))
        {
            cout<<"NO"<<endl;;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
//accepted