/*Problem link :
https://codeforces.com/problemset/problem/580/A
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,j=1,b=0,h=0;
    vector<int> v,w;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    if(v.size()==1)
        cout<<1<<endl;
    else
    {
    while(b<n)
    {
      if(b+1<=n-1 && v[b+1]>=v[b])
      {
        while(b+1<=n-1 && v[b+1]>=v[b])
        {
            j++;
            h++;
            b++;
        }
        w.push_back(j);
        j=1;
      }
      b++;  
    }
    if(h>0)
        cout<<*(max_element(w.begin(),w.end()))<<endl;
    else
        cout<<1<<endl;
    }    
    return 0;
}
//accepted