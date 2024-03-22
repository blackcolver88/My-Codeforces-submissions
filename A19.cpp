/*Problem link :
https://codeforces.com/problemset/problem/160/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,s1=0,s2=0,s3=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size()+1;i++)
    {
        auto m = max_element(v.begin(), v.end());
        s1+=*m;
        s3++;
        v.erase(m);
        s2=0;
        for(int j=0;j<v.size();j++)
            s2+=v[j];
        if(s1>s2)
            break;
    }
    cout<<s3<<endl;
    return 0;
}
//accepted